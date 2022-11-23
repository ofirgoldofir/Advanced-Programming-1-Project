

#ifndef ADVANCED_PROGRAMMING_1_PROJECT_MINKOWSKI_H
#define ADVANCED_PROGRAMMING_1_PROJECT_MINKOWSKI_H

#include "distanceClass.h"
//the p from the algorithm
const int p = 2;
//d(x,y) = (for from 1 to n of abs of (xi - yi)^p)^(1/p)

class minkowski:public distanceClass{
public:
    double distance(vector<double> v1, vector<double> v2) override;
};


#endif //ADVANCED_PROGRAMMING_1_PROJECT_MINKOWSKI_H
