#pragma once
#include "Circle.h"
#include "Square.h"
class InscribedSquare:private Circle, private Square
{
	double radius_result;

public:
	InscribedSquare();
	InscribedSquare(double, double);
	bool isInscribed() const;
	double GetRadius()const;
};

