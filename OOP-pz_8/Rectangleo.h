#pragma once
#include "Pair.h"

class Rectangleo : public Pair {
public:
    Rectangleo(double width = 0, double height = 0) : Pair(width, height) {};
    double getPerimeter() const;
    double getArea() const;
    void display() const;
};