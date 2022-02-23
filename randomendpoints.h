//
//  randomendpoints.h
//  
//
//  Created by Max Albright on 12/22/21.
//

#ifndef randomendpoints_h
#define randomendpoints_h

#include <stdio.h>
#include <iostream>
#include "draw.h"
#include "math.h"
#include <cmath>
#include "bertrandcircle.h"

class randomendpoints: public BertrandCircle{
public:
    randomendpoints(int rad = 1, std::string filename = "image") {
        BertrandCircle(rad, filename);
    }
    ~randomendpoints();
    void calculateBertrand(int iterations);
};




#endif /* randomendpoints_h */



