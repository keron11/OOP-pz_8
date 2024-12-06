#pragma once
class Pair {
protected:
    double first;
    double second;
public:
    Pair(double f = 0, double s = 0) : first(f), second(s) {};
    void setFirst(double f);
    void setSecond(double s);
    double getFirst() const;
    double getSecond() const;
    double multiply() const;
    void display() const;
};

