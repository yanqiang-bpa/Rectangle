//
//  Circle.h
//  
//
//  Created by yanqiang on 8/21/15.
//
//

#ifndef _Circle_h
#define _Circle_h
#include "Point.h"
#include "Shape.h"
#define pi 3.14

class Circle:public Shape
{
private:
    Point center;
    int radius;
public:
    Circle(Point p, int r);
    Circle(int x, int y, int r);
    int getRadius() const {return radius;}
    Point& getCenter() {return center;}
    int virtual getArea()
    {
        return int(pi*radius*radius);
    }
};

inline
Circle::Circle(Point p, int r)
{
    this->center=p;
    this->radius=r;
}

inline
Circle::Circle(int x, int y, int r)
{
    this->center=Point(x, y);
    this->radius=r;
}

#endif
