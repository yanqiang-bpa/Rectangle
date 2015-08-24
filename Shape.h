//
//  Shape.h
//  
//
//  Created by yanqiang on 8/21/15.
//
//

#ifndef _Shape_h
#define _Shape_h
#include <iostream>
using namespace std;

class Shape
{
public:
    int no;
    virtual int getArea()=0;
    virtual ~Shape(){cout<<"Shape was deconstucted."<<endl;}
};

#endif
