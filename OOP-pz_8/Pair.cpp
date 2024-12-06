#include <iostream>
#include "Pair.h"

using namespace std;

void Pair::setFirst(double f) {
    first = f;
}

void Pair::setSecond(double s) {
    second = s;
}

double Pair::getFirst() const {
    return first;
}

double Pair::getSecond() const {
    return second;
}

double Pair::multiply() const {
    return first * second;
}

void Pair::display() const {
    cout << "Пара: (" << first << ", " << second << ")\n";
}