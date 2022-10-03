#pragma once
class Circle
{
protected:
	double radius;

public:
	Circle();
	Circle(double rad);
	double GetRadius()const;
	void SetRadius(double);
};

