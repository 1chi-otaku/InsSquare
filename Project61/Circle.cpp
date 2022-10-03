#include "Circle.h"

Circle::Circle()
{
	radius = 0;
}

Circle::Circle(double rad)
{
	radius = rad;
}

double Circle::GetRadius() const
{
	return radius;
}

void Circle::SetRadius(double rad)
{
	radius = rad;
} 
