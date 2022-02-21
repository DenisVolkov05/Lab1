#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    double sr_zn, sum = 0, x;
    cout << "Введите количество элементов ";
    cin >> n;
    cout << "Вводите элементы ";
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        sum += pow(x, 2);
    }
    sr_zn = sqrt(sum / n);
    cout << "Среднеквадратичное значение равно " << sr_zn;
}
