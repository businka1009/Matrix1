// Trapezii.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float n;
	float a, b, d, y1, y2, x, s = 0;
	cin >> a;
	cin >> b;
	
	cin >> n;
	d = (b - a) / n;
	//x = a;
	while (a < b)
	{
		y1 = pow(a, 0.5) + 2;
		y2 = pow(a+d, 0.5) + 2;
		s = s + (y1 + y2) * d / 2;
		a += d;
	}

	cout << s << endl;
	
}

