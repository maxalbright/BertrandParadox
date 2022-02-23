//
//  bertrandcircle.cpp
//  
//
//  Created by Max Albright on 12/22/21.
//

#include <stdio.h>
#include <iostream>
#include "draw.h"
#include "math.h"
#include <cmath>
#include "bertrandcircle.h"
using namespace draw;
using namespace std;

BertrandCircle::BertrandCircle(int radius = 1, string filename = "image") {
    
    if (radius > 100 || radius < 0) {
        cout << "Bad Radius" << endl;
        return;
    }
    numbergreaterthanKeyVal = 0;
    total = 0;
    this->filename = filename;
    this->radius = radius;
    this->c0 = Color(0, 0 , 0);
    this->keval = sqrt(3)* radius;
    
    setcolor(c0);
    setrange(-100, 100);
    
    
    
    circle(0,0,radius);
    line(0,radius,-0.86666 * radius,-0.5 * radius);
    line(0,radius,0.86666 * radius,-0.5 * radius);
    line(0.86666 * radius,-0.5 * radius,-.86666 * radius,-0.5 * radius);
    setcolor(BLUE);
}



void BertrandCircle::addcord(double x0, double y0, double x1, double y1) {
    
    line(x0,y0,x1,y1);
}

void BertrandCircle::checklength(double x0, double y0, double x1, double y1) {
    double length = sqrt(pow((x1-x0), 2) + pow((y1-y0), 2));
    if (length > keyval) {
        numbergreaterthanKeyVal++;
    }
}

void BertrandCircle::finaloutput(){
    
    cout << "Percentage of chords with length greater than the side of an equilateral triangle inscribed within the same circle: " << 100 * numbergreaterthanKeyVal / total << endl;
}
