#include "stdlib.h"
#include <iostream>

using namespace std;

double square(double n, double a)
{
    double S;
    double const Pi = 3.14159265359;
    S = 0;
    S = n / 4 * pow(a, 2) * (1 / tan(Pi / n));
    return S;
}

void main()
{
    setlocale(LC_ALL, "Russian");
    double N, K; int Number;
    cout << "Сделайте выбор:" << endl << endl;
    cout << "1. Посчитать площадь правильного треугольника" << endl;
    cout << "2. Посчитать площадь правильного пятиугольника" << endl;
    cout << "3. Посчитать площадь правильного восьмиугольника" << endl;
    cout << "4. Выйти с программы" << endl << endl;
    cout << "Ваш выбор:"; cin >> Number;
    switch (Number)
    {
    case 1: {N = 3; break; }
    case 2: {N = 5; break; }
    case 3: {N = 8; break; }
    case 4: {exit(0); break; }
    }
    cout << "Enter dlinu storon:"; cin >> K;
    cout << endl;
    cout << "\nPloshad=" << square(N, K) << endl;
    system("pause");
}

