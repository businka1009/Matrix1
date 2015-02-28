
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

float f(float x)
{
	return pow(x,3) / 6 + 2;
}

float pryam(float a, float b, int n)
{	
		float result=0, h;
		int i;
		h = (b - a) / n;

		for (i = 0; i < n; i++)
		{
			result += f((a + h * (i + 0.5)));
		}

		return result*h;
	
}

int main()
{
	float a, b;
	int n;
	cin >> a >> b >> n;
	float integral;
	if (a > b)
	{
		cout << "Nevernye predely!!" << endl;
		exit(0);
	}

	
	integral = pryam(a, b, n);
	cout << integral << endl;
}

