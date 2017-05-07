/** file: ball.h
 ** brief: Ball class
 ** author: Andrea Vedaldi
 **/

/**
Linhas alteradas ou criadas referentes a tarefa:18,21a24.
**/
#ifndef __ball__
#define __ball__

#include "simulation.h"

class Ball : public Simulation
{
public:
  // Constructors, member functions, get and set coordinates
  Ball(double coordX, double coordY) ;
  void step(double dt) ;
  void display() ;
  double getCoordx ();
  void setCoordx(double x);
  double getCoordy();
  void setCoordy(double y);

protected:
  // Data members
  // Position and velocity of the ball
  double x ;
  double y ;
  double vx ;
  double vy ;

  // Mass and size of the ball
  double m ;
  double r ;

  // Gravity acceleration
  double g ;

  // Geometry of the box containing the ball
  double xmin ;
  double xmax ;
  double ymin ;
  double ymax ;
} ;

#endif /* defined(__ball__) */
