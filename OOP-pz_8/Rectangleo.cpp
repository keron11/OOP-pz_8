#include "Rectangleo.h"
#include <iostream>

using namespace std;

double Rectangleo::getPerimeter() const {
    return 2 * (first + second);
}

double Rectangleo::getArea() const {
    return first * second;
}

void Rectangleo::display() const {
    cout << "ѕр€мокутник: ширина = " << first << ", висота = " << second
        << ", периметр = " << getPerimeter()
        << ", площа = " << getArea() << "\n";
}