//
//  Rectangle.h
//  
//
//  Created by yanqiang on 8/20/15.
//
//

#ifndef _Rectangle_h
#define _Rectangle_h
#include "Point.h"
#include "Shape.h"
#include <iostream>
using namespace std;

class Rectangle:public Shape
{
private:
    int width;
    int height;
    
    Point* leftUp;
public:
    Rectangle(int width, int height, int x, int y);
    Rectangle(const Rectangle& other);
    Rectangle& operator=(const Rectangle& other);
//    ~Rectangle();
    int getWidth() const {return width;}
    int getHeight() const {return height;}
    void setWidth(int w){this->width=w;}
    void setHeight(int h){this->height=h;}
    Point* getLeftUp() const {return this->leftUp;}
    int virtual getArea();
    virtual ~Rectangle();

};

inline
int Rectangle::getArea()
{
    return width*height;
}

inline
Rectangle::Rectangle(int w, int h, int x, int y)
:width(w), height(h)
{
    leftUp = new Point(x,y);
    leftUp->setX(x);
    leftUp->setY(y);
}

inline
Rectangle::Rectangle(const Rectangle& other)
{
    leftUp = new Point();
    leftUp->setX(other.leftUp->getX());
    leftUp->setY(other.leftUp->getY());
    setWidth(other.getWidth());
    setHeight(other.getHeight());
}

inline
Rectangle& Rectangle::operator = (const Rectangle& other)
{
    if(this==&other)
    {
        return *this;
    }
    leftUp=new Point();
    leftUp->setX(other.leftUp->getX());
    leftUp->setY(other.leftUp->getY());
    setWidth(other.getWidth());
    setHeight(other.getHeight());
    return *this;
}

inline
Rectangle::~Rectangle()
{
    delete leftUp;
    cout<<"Rectangle was deconstucted."<<endl;
}



#endif
