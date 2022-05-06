//
// Created by yPhysicist on 01.05.2022.
//
#include "krug.h"

krug::krug() {
    radius = 0;
}

krug::~krug() {

}

void krug::setRadius(double rad) {
    this->radius = rad;
}

double krug::getRadius() {
    int rad = this->radius;
    return rad;
}
double krug::getPloshad() {
    return Pi * pow(radius, 2);
}

double krug::getLength() {
    return 2 * Pi * this->radius;
}
