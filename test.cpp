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
    Shape* shapeList[20];
    
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
        shapeList[i]->no=i;
        cout<<"第"<<i<<"个Shape被new,"<<"地址是："<<shapeList[i]<<endl;
    }
    
    int cx, cy, cr;
    for(int j=10;j<20;j++)
    {
        cx=rand()%10+1;
        cy=rand()%10+1;
        cr=rand()%10+1;
        cout<<"Radium: "<<cr<<endl;
        shapeList[j]=new Circle(cx, cy, cr);
        shapeList[j]->no=j;
        cout<<"第"<<j<<"个Shape被new,"<<"地址是："<<shapeList[j]<<endl;

    }
    
    int countTooSamll=0;
    
    for(int t=0; t<20; t++)
    {
        Shape* s=shapeList[t];
        int area=s->getArea();
//        cout<<"t: "<<t<<", Area: "<<area<<endl;
        
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
        cout<<shapeListResult[b]->no<<"号图形的"<<"面积是: "<<shapeListResult[b]->getArea()<<endl;
    }
    
    
    for(int i=0;i<20-countTooSamll;i++)
    {
        Shape* s=shapeListResult[i];
        cout<<"第"<<shapeListResult[i]->no<<"个Shape地址是："<<shapeListResult[i]<<endl;
    
    }
    
    for(int i=0;i<20;i++)
    {
        Shape* s=shapeList[i];
        if(s)
        {
            delete s;
            cout<<"第"<<i<<"个Shape被delete,"<<"地址是："<<shapeList[i]<<endl;
        }
        else
            cout<<"第"<<i<<"个Shape早已被delete,"<<"地址是："<<shapeList[i]<<endl;
    }
    
    return 0;
}

