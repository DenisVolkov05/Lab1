#include <iostream>
#include <fstream>
using namespace std;
int fun(const char* filename)
{
	ifstream file(filename);
	int pred = INT_MAX, usl = 0, n = 1, nomer;
	double a;
	while (!file.eof())
	{
		file >> a;
		if (a > pred)
		{
			usl = 1;
		}
		else
		{
			if (a < pred)
			{
				if (usl == 1)
				{
					nomer = n - 1;
					break;
				}
			}
		}
		pred = a;
		n++;
	}
	return nomer;
}
int main()
{
	cout << fun("1.txt");
}