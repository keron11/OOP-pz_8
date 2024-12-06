#include <iostream>
#include <Windows.h>
#include "Pair.h"
#include "Rectangleo.h"
#include "OOP-pz_8.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Pair p(3, 4);
    p.display();
    cout << "Результат множення: " << p.multiply() << "\n\n";

    Rectangleo r(5, 7);
    r.display();

    Pair* pairPtr = &r;
    cout << "Використання покажчика базового класу для виклику методу похідного класу:\n";
    pairPtr->display();
}