#include <iostream>
#include <iomanip>
#include "windows.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	int a, x, b, c;
	float y; bool f = true;
	cout << "������ ����� a:";
	cin >> a;
	cout << "������ ����� x:";
	cin >> x;
	cout << "������ ����� b:";
	cin >> b;
	cout << "������ ����� c:";
	cin >> c;
	if ((x - 1 > 0) && (b - x != 0))
	{
		y = a  * x + b;
	}
	if ((x - 1 > 0) && (b + x == 0))
	{
		y = (x - a) / x;
	}
	else if (c != 0)
		y = x / c;
	else f = false;
	if (f) cout << y;
	else cout << "Error";


}
