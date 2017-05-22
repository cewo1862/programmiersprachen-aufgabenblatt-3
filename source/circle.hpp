#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "color.hpp"
class Circle{
public:
	Circle();
	Circle(float r_, Color const& clr_);
	void setRadius(float r_);
	void setColor(Color clr_);
	float getRadius() const;
	float getArea() const;
	float getCircumreference() const;
	Color getColor() const;
	Point2D getCenter() const;
	Circle operator>(Circle
private:
	float r;
	Color clr;
	Point2D ctr;
};

#endif
