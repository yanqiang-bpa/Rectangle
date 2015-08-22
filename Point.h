//
//  Point.h
//  
//
//  Created by yanqiang on 8/21/15.
//
//

#ifndef _Point_h
#define _Point_h

class Point
{
private:
    int x;
    int y;
public:
    Point(int x=0, int y=0)
    :x(x),y(y)
    {}
    int getX() const{return x;}
    int getY() const{return y;}
    void setX(int x){this->x=x;}
    void setY(int y){this->y=y;}
};


#endif
