//
//  bertrandcircle.h
//  
//
//  Created by Max Albright on 12/22/21.
//

#ifndef bertrandcircle_h
#define bertrandcircle_h
#include <stdio.h>
#include <iostream>
#include "draw.h"
#include "math.h"
#include <cmath>


class BertrandCircle {
public:
    BertrandCircle(int radius = 1, std::string filename = "image");
    ~BertrandCircle();
    void addcord(double x0, double y0, double x1, double y1);
    virtual void calculateBertrand(int iterations) = 0;
    void finaloutput();
protected:
    void checklength(double x0, double y0, double x1, double y1);
    int radius;
    Color c0;
    std::string filename;
    double keyval;
    int total;
    double numbergreaterthanKeyVal;
};




#endif /* bertrandcircle_h */
