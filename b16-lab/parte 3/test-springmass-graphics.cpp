/** file: test-springmass-graphics.cpp
 ** brief: Tests the spring mass simulation with graphics
 ** author: Andrea Vedaldi
 **/

#include "graphics.h"
#include "springmass.h"

#include <iostream>
#include <sstream>
#include <iomanip>

/* ---------------------------------------------------------------- */
class SpringMassDrawable : public SpringMass, public Drawable
/* ---------------------------------------------------------------- */
{
	private:
		Figure figure;

	public:
		SpringMassDrawable()
		:SpringMass(), figure("SpringMass")
		{
			figure.addDrawable(this);
		}

		void draw()
		{
			double Mass1_x, Mass1_y, Mass2_x, Mass2_y, radius, tickness = 2;

			Mass1_x = this->masses[0].getPosition().x;
			Mass1_y = this->masses[0].getPosition().y;
			Mass2_x = this->masses[1].getPosition().x;
			Mass2_y = this->masses[1].getPosition().y;

			radius = this->masses[0].getRadius();
			
			figure.drawCircle(Mass1_x, Mass1_y, radius);
			figure.drawCircle(Mass2_x, Mass2_y, radius);
			figure.drawLine(Mass1_x, Mass1_y, Mass2_x, Mass2_y, tickness);
		}

		void display()
		{
			figure.update();
		}
} ;

int main(int argc, char** argv)
{
  	glutInit(&argc,argv) ;
  	SpringMassDrawable springmass ;

	const double mass1 = 0.1 ;
	const double mass2 = 0.5 ;
	const double radius1 = 0.1 ;
	const double radius2 = 0.5 ;
	const double naturalLength = 0.95 ;
	const double dt = 1.0/120.0 ;

	Mass m1(Vector2(-.5,0), Vector2(), mass1, radius1) ;
	Mass m2(Vector2(+.5,0), Vector2(), mass2, radius2) ;
	springmass.addMass(m1);
	springmass.addMass(m2);
	springmass.addSpring(0,1, naturalLength, 1.0);

	run(&springmass, dt);
	return 0 ;
}