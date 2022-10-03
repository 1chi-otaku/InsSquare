#include "Square.h"

Square::Square()
{
    radius = 0;
}

Square::Square(double rad)
{
    radius = rad;
}

double Square::GetRadius()const
{
    return radius;
}

void Square::SetRadius(double rad)
{
    radius = rad;
}
