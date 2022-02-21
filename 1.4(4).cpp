#include <iostream>
using namespace std;
double exp(double x, int n)
{
	double s, q;
	s = 0;
	q = 1;
	for (int i = 0; i <= n ; i++)
	{
		s += q;
		q *= x / (i + 1);
	}
	return s;
}
int main()
{
	cout << exp(1, 3);
}