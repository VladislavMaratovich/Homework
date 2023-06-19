#include <iostream>
#include <cmath>
using namespace std;
int Add(int a = 0, int b = 0, int c = 0);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
int Fact(int a);
void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << "Факториал числа" << a << "=" << Fact(a) << endl;
	cout << "Возведение числа " << a <<" в степень " << b << "=" << pow(a,b) << endl;
}
int Add(int a, int b, int c)
{
	int sum = a + b + c;
	return sum;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}
int Fact(int a)
{
	if (a == 0)
		return 1;
	return a * Fact(a - 1);
}
