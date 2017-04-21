/** file: test-ball.cpp
 ** brief: Tests the bouncing ball simulation
 ** author: Andrea Vedaldi
 **/

/**
Linhas referentes a tarefa:11a16,20,s22,23,25 
**/
#include "ball.h"

void cont(Simulation & t, double dt){
	for (int i = 0 ; i < 100 ; ++i) {
	    t.step(dt) ;
	    t.display() ;
  }
}

int main(int argc, char** argv)
{
  Ball ball (0.1,0.1);
  const double dt = 1.0/30 ;
  ball.setCoordx(0.5);
  ball.setCoordy(0.5);

  cont(ball,dt);
  return 0 ;
}
