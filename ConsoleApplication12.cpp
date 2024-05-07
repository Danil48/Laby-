#include <iostream>
using namespace std;

int direct_factorial(int x);
double direct_calculation(int x);
int factorial(int x);
double recursive_calculation(int x, int n);

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите x и для вычисления значения функции: ";;
	int x;
	cin >> x;
	int n = 5;
	cout<< direct_calculation(x) << "\n";
	cout << recursive_calculation(x, n) << "\n";
	return 0;


}

int direct_factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * direct_factorial(n - 1);
}

double direct_calculation(int x)
{
	double s = s + pow(-1, i) * (2 * i, 2) / direct_factorial(2 * i) * (x, 2 * i);
	int accuracy =1;
	for (int i = 0; i < accuracy; i++)
	{
		s = s + pow(-1, i) * (2 * i, 2) / direct_factorial(2 * i) * (x, 2 * i);
	}
	return s;
}

int factorial(int x)
{
	if (x <= 1)
		return 1 * x;
	else
		return x * factorial(x - 1);
}

double recursive_calculation(int x, int n)
{
	if (n == 0)
		return x;
	return pow(-1, n) * (2 * x, 2) / direct_factorial(2 * n) * (x, 2 * n) + recursive_calculation(x, n - 1);
}