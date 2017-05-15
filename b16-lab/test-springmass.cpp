/** file: test-srpingmass.cpp
 ** brief: Tests the spring mass simulation
 ** author: Andrea Vedaldi
 **/

#include "springmass.h"

int main(int argc, char** argv)
{

  const double mass = 0.05 ;
  const double radius = 0.02 ;
  const double naturalLength = 0.95 ;
  const double stiffness=1.0;
  //const double damping=0.01;
  const double dt= 1.0/30;

  Mass m1(Vector2(-.5,0), Vector2(), mass, radius) ;
  Mass m2(Vector2(+.5,0), Vector2(), mass, radius) ;

  /* COMPLETE:  
     1. Adicione as duas massas instanciadas acima (2 linhas).
     2. Adicione uma mola com as duas massas (indexadas por 0 e 1),
        e com o parametro de comprimento em repouso inicializado acima.
	(1 linha).
   */
  Spring spring (&m1,&m2,naturalLength,stiffness);
  SpringMass springmass (&m1,&m2,&spring);

  for (int i = 0 ; i < 100 ; ++i) {
    springmass.step(dt) ;
    springmass.display() ;
  }

  return 0 ;
}
