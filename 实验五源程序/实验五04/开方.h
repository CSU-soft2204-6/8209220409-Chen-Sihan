#pragma once
#include<iostream>
using namespace std;
double squa(double a = 0)
{
	double x = a;
	double y = (x + a / x) / 2;
	while ((y - x) > 1e-10 || (y - x) < -1e-10)
	{
		x = y;
		y = (x + a / x) / 2;
	}
	return y;
}