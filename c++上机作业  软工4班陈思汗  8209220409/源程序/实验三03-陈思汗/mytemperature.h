#pragma once
#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{
	double fah;
	fah = cel * 9 / 5 + 32;
	return fah;
}
double fshrenheit_to_cels(double fah)
{
	double cel;
	cel = (fah - 32) * 5 / 9;
	return cel;
}