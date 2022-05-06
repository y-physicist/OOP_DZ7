//
// Created by yPhysicist on 01.05.2022.
//

#ifndef OOP_DZ7_COMPLEX_H
#define OOP_DZ7_COMPLEX_H

#include <string>
#include <iostream>
#include <cmath>

using namespace std;


class Complex {
private:
    double re;
    double im;
public:
    void print();
    Complex();
    ~Complex();
    Complex sum(Complex cmp1);
    Complex vich(Complex cmp1);
    Complex mult(Complex cmp1);
    Complex del(Complex cmp1);
    double mod();
};

#endif //OOP_DZ7_COMPLEX_H
