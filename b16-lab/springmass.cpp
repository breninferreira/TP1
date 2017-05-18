/** file: springmass.cpp
 ** brief: SpringMass simulation implementation
 ** author: Andrea Vedaldi
 **/

#include "springmass.h"

#include <iostream>
#include <cmath>

/* ---------------------------------------------------------------- */
// class Mass
/* ---------------------------------------------------------------- */

Mass::Mass()
: position(), velocity(), force(), mass(1), radius(1)
{ }

Mass::Mass(Vector2 position, Vector2 velocity, double mass, double radius)
: position(position), velocity(velocity), force(), mass(mass), radius(radius),
xmin(-1),xmax(1),ymin(-1),ymax(1)
{ }

void Mass::setForce(Vector2 f)
{
  force = f ;
}

void Mass::addForce(Vector2 f)
{
  force = force + f ;
}

Vector2 Mass::getForce() const
{
  return force ;
}

Vector2 Mass::getPosition() const
{
  return position ;
}

Vector2 Mass::getVelocity() const
{
  return velocity ;
}

double Mass::getRadius() const
{
  return radius ;
}

double Mass::getMass() const
{
  return mass ;
}

double Mass::getEnergy(double gravity) const
{
  double energy = 0 ;

  /* COMPLETE: 
     Este metodo calcula a energia esta massa, indepentente
     de outras massas ou molas do sistema, ou seja, 
     energia potencial + energia cinetica, onde:
     E_cinetica = (massa * |velocidate|^2)/2
     E_potencial = mass * gravidade * altura.
     Note que o calculo da altura deve levar o raio
     da bola em conta, pois as coordenadas da bola sao dadas
     com relacao a seu centro, e nao ao ponto de impacto com 
     o solo.
   */
    double E_cinetica = (getMass()*((getVelocity().y)*(getVelocity().y))/2);
    double E_potencial = (getMass()* gravity *(getPosition().y - getRadius()));
    energy= E_cinetica + E_potencial;

  return energy ;
}

void Mass::step(double dt)
{
  /* COMPLETE:  
     Este eh o metodo mais complexo, ele atualiza 
     - a posicao e 
     - a velocidade desta massa 
     usando a 
     - forca que eh aplicada `a massa (armazenada em
       atributo protegido) e 
     - a fracao de tempo (dt).
     Isso eh feito atravez da aplicacao de equacoes 
     basicas de mecanica. 
     1. Calcule a aceleracao:
        F = m*a  ->  a = F/m
     2. Atualize a posicao:
        S = S0 + V*dt + (a*dt^2)/2 
     3. Atualize a velocidade:
        V = V0 + a*dt
     Note que nos passos 2 e 3, eh necessario tratar
     de colisoes com as paredes da caixa. Para isso,
     eh melhor separar os calculos de componentes
     x e y da velocidade e da posicao.
   */

    Vector2 posicao2;
    Vector2 aceleracao;
    Vector2 velocidade2;

    
    aceleracao.x = (getForce().x)/getMass();
    aceleracao.y = (getForce().y)/getMass();

    
    posicao2.x = getPosition().x + (getVelocity().x * dt) - (0.5 * aceleracao.x * dt * dt);
    posicao2.y = getPosition().y + (getVelocity().y * dt) - (0.5 * aceleracao.y * dt * dt);

    
    velocidade2.x = getVelocity().x + aceleracao.x * dt;
    velocidade2.y = getVelocity().y + aceleracao.y * dt;

    if (xmin + getRadius() <= posicao2.x && posicao2.x <= xmax - getRadius()) {
      position.x = posicao2.x;
      velocity.x = velocidade2.x;
    } else {
      velocity.x = -velocity.x;
    }

    if (ymin + getRadius() <= posicao2.y && posicao2.y <= ymax - getRadius()) {
      position.y = posicao2.y;
      velocity.y = velocidade2.y;
    } else {
      velocity.y = -velocity.y;
    }
}

/* ---------------------------------------------------------------- */
// class Spring
/* ---------------------------------------------------------------- */

Spring::Spring (Mass * mass1, Mass * mass2, double naturalLength, double stiffness, double damping)
: mass1(mass1), mass2(mass2),naturalLength(naturalLength), stiffness(stiffness), damping(damping)
{ }

Mass * Spring::getMass1() const
{
  return mass1 ;
}

Mass * Spring::getMass2() const
{
  return mass2 ;
}

Vector2 Spring::getForce() const
{
  Vector2 F ;

  /* COMPLETE: 
     Este metodo calcula a forca desta mola usando as equacoes
     para oscilador harmonico amortecido 
     https://en.wikipedia.org/wiki/Harmonic_oscillator#Damped_harmonic_oscillator
     ou seja:
     F = -K*x - c*v, onde:
       K: coeficiente elastico da mola (stiffness),
       x: o vetor que leva da posicao atual da mola ate 
          a posicao de repouso.
       c: coeficiente de amortecimento (damping)
       v: vetor de velocidade da mola.

     Procedimento:
     1. Calcule o vetor u da distancia entre as 
        duas extremidades da mola. 
	Dica: use subtracao de Vector2, i.e., operator-()
     2. Calcule o comprimento atual da mola. 
        Dica: use o metodo norm().
     3. Calcule o vetor unitario da direcao da mola, i.e.
        o resultado de (1) dividido pelo resultado de (2).
     4. Calcule o vetor da velocidade de alongamento entre 
        as duas massas, i.e., o produto interno (dot()) entre
	v2-v1 e o vetor unitario da direcao da mola 
	(resultado de 3).
     5. O modulo da forca eh entao calculado por:
          (comprimento_da_mola_em_repouso - comprimento_atual)*stiffness + 
          velocidada_de_alongamento * damping 
     6. O vetor da forca eh entao calculado pelo resultado
        de (5) multiplicado pelo vetor de direcao da mola (3).	
   */

    Vector2 u=mass2->getPosition() - mass1->getPosition();
    Vector2 vetorUnitario= u/getLength(); //testar , n sei se esta correto
    double velocidadeAlongamento= dot (mass2->getVelocity() - mass1->getVelocity(),vetorUnitario);
    double moduloForca= (getLength()- naturalLength) * stiffness*velocidadeAlongamento*damping;
    F= moduloForca*vetorUnitario;


  return F ;
}


double Spring::getLength() const
{
  Vector2 u = mass2->getPosition() - mass1->getPosition() ;
  return u.norm() ;
}

double Spring::getEnergy() const {
  double length = getLength() ;
  double dl = length - naturalLength;
  return 0.5 * stiffness * dl * dl ;
}

std::ostream& operator << (std::ostream& os, const Mass& m)
{
  os<<"("
  <<m.getPosition().x<<","
  <<m.getPosition().y<<")" ;
  return os ;
}

std::ostream& operator << (std::ostream& os, const Spring& s)
{
  return os<<"$"<<s.getLength() ;
}

/* ---------------------------------------------------------------- */
// class SpringMass : public Simulation
/* ---------------------------------------------------------------- */

SpringMass::SpringMass(Mass * mass1, Mass * mass2, Spring * spring, double gravity)
: mass1(mass1),mass2(mass2),spring(spring), gravity(gravity)
{ }

void SpringMass::display()
{

  /* COMPLETE: TYPE YOUR CODE HERE 
     Implemente usando dois loops:
     1. imprima todas as massas
     2. imprima todas as molas
     Note que voce pode ousar o operador << diretamente
     para massas e molas, pois eles foram definidos acima.
     Posteriormente, imprima a energia total do sistema.     
   */

    std::cout<<mass1->getPosition().x<<" "<<mass1->getPosition().y<<" "<<mass2->getPosition().x<<" "<<mass2->getPosition().y<<" "<<std::endl;


}

double SpringMass::getEnergy() const
{
  double energy = 0 ;

  /* COMPLETE: TYPE YOUR CODE HERE 
     A energia total do sistema eh
     a soma das energias de todas as massas 
     + a soma das energias de todas as molas.
   */

  energy= mass1->getEnergy(gravity)+mass2->getEnergy(gravity)+ spring->getEnergy();

  return energy ;
}

void SpringMass::step(double dt)
{
  Vector2 g(0,-gravity) ; // Vetor da gravidade, i.e.,
  // aceleracao apontando para baixo.
  
  /* COMPLETE:  
     1. para cada massa,
        atualize sua forca usando m*g, i.e.
	masses[i].setForce(g * masses[i].getMass()) 
     2. para cada mola, obtenha a forca da mola e 
        adicione-a a cada massa ligada a esta mola, i.e.,
	springs[i].getMass1()->addForce(-1 * force) ;
	springs[i].getMass2()->addForce(+1 * force) ;     
     3. Atualize a posicao e velocidade de todas as massas,
        i.e., execute o metodo step() delas.
   */
  mass1->setForce(g);
  mass2->setForce(g);
  mass1->addForce(spring->getForce());
  mass2->addForce(-1.0*spring->getForce());
  mass1->step(dt);
  mass2->step(dt);

}




