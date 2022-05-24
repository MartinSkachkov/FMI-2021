#ifndef __TRIANGLE_H_
#define __TRIANGLE_H_
#include "Shape.h"

class Triangle : public Shape {
public:
	Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
	virtual double getArea() const override;
	virtual double getPerimeter() const override;
};

#endif
