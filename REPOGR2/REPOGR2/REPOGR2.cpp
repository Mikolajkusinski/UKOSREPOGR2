#include <iostream>
#include<cmath>
using namespace std;
double trojkat(double a, double b, double c);
int main()
{
	double a, b, c;
	cout << "Podaj dlugosc boku a : "; cin >> a;
	cout << "Podaj dlugosc boku b : "; cin >> b;
	cout << "podaj dlugosc boku c : "; cin >> c;
	cout << "Pole trojkata o bokach: " << a << " " << b << " " << c << " " << "wynosi : " << trojkat(a, b, c);
}
double trojkat(double a, double b, double c)
{
	int p = (a + b + c) / 2;
	if ((a + c > b) && (b + c > a) && (a + b > c))
	{
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
	else
		return -1;
}
