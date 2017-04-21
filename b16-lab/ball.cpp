/** file: ball.cpp
 ** brief: Ball class - implementation
 ** author: Andrea Vedaldi
 **/

/**
Linhas alteradas ou criadas referentes a tarefa:14,28a39,61
**/

#include "ball.h"

#include <iostream>

Ball::Ball(double coordX, double coordY){
  r = 0.1;
  x = coordX;
  y = coordY;
  vx = 0.3;
  vy = -0.1;
  g = 9.8;
  m = 1;
  xmin = -1;
  xmax = 1;
  ymin = -1;
  ymax = 1;
}

double Ball::getCoordx(){
  return x;
}
double Ball::getCoordy(){
  return y;
}
void Ball::setCoordx(double coordX){
  x=coordX;
}
void Ball::setCoordy(double coordY){
  y=coordY;
}


void Ball::step(double dt)
{
  double xp = x + vx * dt ;
  double yp = y + vy * dt - 0.5 * g * dt * dt ;
  if (xmin + r <= xp && xp <= xmax - r) {
    x = xp ;
  } else {
     vx = -vx ;
  }
  if (ymin + r <= yp && yp <= ymax - r) {
    y = yp ;
    vy = vy - g * dt ;
  } else {
    vy = -vy ;
  }
}

void Ball::display()
{
  std::cout<<Ball::getCoordx()<<" "<<getCoordy()<<std::endl ;

}
