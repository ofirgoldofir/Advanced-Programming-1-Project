

#include "distance/h/Manhattan.h"
// Calculate the Manhattan distance of 2 vectors. d(v1,v2) = sigma of the absolute value of v1[i] - v2[i] when i run
// form 0 to v1/v2.size
double Manhattan :: distance(std::vector<double> v1, std::vector<double> v2) {
    double distance = 0;
    for (int i = 0; i < v1.size(); i++) {
        distance += abs(v1[i]-v2[i]);
    }
    return distance;
}