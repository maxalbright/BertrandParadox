//
//  randomendpoints.cpp
//  
//
//  Created by Max Albright on 12/22/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "draw.h"
#include "math.h"
#include <cmath>
#include "bertrandcircle.h"
#include "randomendpoints.h"

void randomendpoints::calculateBertrand(int iterations){
    total = iterations;
    for (int i = 0; i  < iterations; i++) {
        double a1 =  (rand() % 100000) / 100000 * 2 * M_PI;
        double a2 = (rand() % 100000) / 100000 * 2 * M_PI;
        double x0 = radius * cos(a1);
        double y0 = radius * sin(a1);
        double x1 = radius * cos(a2);
        double y1 = radius * sin(a2);
        checklength(x0,y0,x1,y1);
        addcord(x0,y0,x1,y1);
    }
    finaloutput(); 
}
