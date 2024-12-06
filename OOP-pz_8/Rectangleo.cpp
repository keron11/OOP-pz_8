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
    cout << "�����������: ������ = " << first << ", ������ = " << second
        << ", �������� = " << getPerimeter()
        << ", ����� = " << getArea() << "\n";
}