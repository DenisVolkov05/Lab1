#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265;
int main()
{
	setlocale(LC_ALL, "Russian");
	double L, a, V, g = 10;
	cout << "Введите угол ";
	cin >> a;
	cout << "Введите начальную скорость ";
	cin >> V;
	L = pow(V, 2) * sin(2 * a * PI / 180) / g;
	cout << "Дальность полета: " << L;
}