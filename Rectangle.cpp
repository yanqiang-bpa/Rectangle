//
//  test.cpp
//  
//
//  Created by yanqiang on 8/20/15.
//
//

#include <stdio.h>
#include "Rectangle.h"
#include <iostream>
using namespace std;
int main()
{
    Rectangle r=Rectangle(4, 3, 1, 1);
    Rectangle r2(r);
    Rectangle r3 = r2;
    cout<<"r: "<<"width: "<<r.width<<" ,height: "<<r.height<<endl;
    cout<<"r2: "<<"width: "<<r2.width<<" ,height: "<<r2.height<<endl;
    cout<<"r3: "<<"width: "<<r3.width<<" ,height: "<<r3.height<<endl;
    return 0;
}

