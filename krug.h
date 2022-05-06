//
// Created by yPhysicist on 01.05.2022.
//

#ifndef OOP_DZ7_KRUG_H
#define OOP_DZ7_KRUG_H

#include <iostream>
#include <cmath>

using namespace std;

const double Pi = 3.1415;

class krug {
private:
    double radius;
public:
    krug();
    ~krug();
    void setRadius(double);
    double getRadius();
    double getPloshad();
    double getLength();
};

#endif //OOP_DZ7_KRUG_H
