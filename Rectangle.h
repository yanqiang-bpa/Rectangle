//
//  Rectangle.h
//  
//
//  Created by yanqiang on 8/20/15.
//
//

#ifndef _Rectangle_h
#define _Rectangle_h

class Shape
{
    int no;
};

class Point
{
public:
    int x;
    int y;
};

class Rectangle:public Shape
{
public:
    int width;
    int height;
    
    Point* leftUp;
public:
    Rectangle(int width, int height, int x, int y);
    Rectangle(const Rectangle& other);
    Rectangle& operator=(const Rectangle& other);
    ~Rectangle();
};

inline
Rectangle::Rectangle(int w, int h, int x, int y)
:width(w), height(h)
{
    leftUp = new Point();
    leftUp->x = x;
    leftUp->y = y;
}

inline
Rectangle::Rectangle(const Rectangle& other)
{
    leftUp = new Point();
    leftUp->x = other.leftUp->x;
    leftUp->y = other.leftUp->y;
    width = other.width;
    height = other.height;
}

inline
Rectangle& Rectangle::operator = (const Rectangle& other)
{
    if(this==&other)
    {
        return *this;
    }
    leftUp=new Point();
    leftUp->x = other.leftUp->x;
    leftUp->y = other.leftUp->y;
    width = other.width;
    height = other.height;
    return *this;
}

inline
Rectangle::~Rectangle()
{
    delete leftUp;
}



#endif
