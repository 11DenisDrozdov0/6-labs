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
	cout << "¬вед≥ть число a:";
	cin >> a;
	cout << "¬вед≥ть число x:";
	cin >> x;
	cout << "¬вед≥ть число b:";
	cin >> b;
	cout << "¬вед≥ть число c:";
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
