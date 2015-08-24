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
    Point(int xx=0, int yy=0)
    :x(xx),y(yy)
    {}
    int getX() const{return this->x;}
    int getY() const{return this->y;}
    void setX(int x){this->x=x;}
    void setY(int y){this->y=y;}
};


#endif
