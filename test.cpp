//
//  test.cpp
//  
//
//  Created by yanqiang on 8/20/15.
//
//

#include <stdio.h>
#include "Rectangle.h"
#include "Point.h"
#include "Circle.h"
#include "Shape.h"
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
//    Rectangle r=Rectangle(4, 3, 1, 1);
//    Rectangle r2(r);
//    Rectangle r3 = r2;
//    Rectangle r4=Rectangle(4, 9, 5, 1);
//    
//    Point point(3, 4);
//    Circle c1(point, 3);
//    
    Shape* shapeList[20];
//    shapeList[0]=(Shape*)&r;
//    shapeList[1]=(Shape*)&r2;
//    shapeList[2]=(Shape*)&c1;
//    shapeList[3]=(Shape*)&r4;
    
    srand(time(0));
    int w, h, x, y;
    for(int i=0;i<10;i++)
    {
        w=rand()%10+1;
        h=rand()%10+1;
        x=rand()%10+1;
        y=rand()%10+1;
        cout<<w<<", "<<h<<endl;
        shapeList[i]=new Rectangle(w,h,x,y);
    }
    
    int cx, cy, cr;
    for(int j=10;j<20;j++)
    {
        cx=rand()%10+1;
        cy=rand()%10+1;
        cr=rand()%10+1;
        cout<<"Radium: "<<cr<<endl;
        shapeList[j]=new Circle(cx, cy, cr);

    }
    
    int countTooSamll=0;
    
    for(int t=0; t<20; t++)
    {
        Shape* s=shapeList[t];
        int area=s->getArea();
        cout<<"t: "<<t<<", Area: "<<area<<endl;
        
        if(area<50)
        {
            countTooSamll++;
        }
    }
    
    Shape* shapeListResult[20-countTooSamll];
    
    int newIndex=0;
    
    for(int n=0;n<20;n++)
    {
        int area=shapeList[n]->getArea();
        if(area>=50)
        {
            shapeListResult[newIndex]=shapeList[n];
            newIndex++;
        }
        
    }
    
    for(int b=0;b<20-countTooSamll;b++)
    {
        cout<<"b: "<<b<<", area: "<<shapeListResult[b]->getArea()<<endl;
    }
    
    
    return 0;
}

