// след.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int MAX = 100;

int _tmain(int argc, _TCHAR* argv[])
{
	double a[MAX][MAX];
	int n;
	cin >> n;
	double sled_matrix = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				sled_matrix = sled_matrix + a[i][j];
			}
			
		}
	cout << sled_matrix;
	return 0;
}

