#include "InscribedSquare.h"
#include <cmath>
InscribedSquare::InscribedSquare():Circle(), Square()
{
	radius_result = 0;
}

InscribedSquare::InscribedSquare(double rad1, double rad2):Circle(rad1),Square(rad2)
{
	radius_result = Square::GetRadius() / 2;

}

double InscribedSquare::GetRadius() const
{
	return radius_result;
}

bool InscribedSquare::isInscribed()const //If square radius divided by 2 is larger than circle radius, then circle will fit.
{
	if (Circle::GetRadius() <= radius_result ) return 1;
	return 0;

}
