#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double e, x, exp = 0;
	cout << "Введите число ";
	cin >> x;
	int N, fact;
	cout << "Введите границу ряда ";
	cin >> N;
	for (int n = 0; n <= N; n++)
	{
		fact = 1;
		if (n != 0)
		{
			for (int j = 1; j <= n; j++)
			{
				fact = fact * j;
			}
		}
		else fact = 1;
		e = pow(x, n) / fact;
		exp += e;
	}
	cout << "exp(x) = " << exp;
}