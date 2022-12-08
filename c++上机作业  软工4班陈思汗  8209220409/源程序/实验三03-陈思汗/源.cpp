#include<iostream>
#include"mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius" << '\t' << "Fahrenheit" << '\t' << "|" << '\t' << "Fahrenheit" << '\t' << "Celsius" << endl;
	cout << 40.0 << '\t' << celsius_to_fah(40.0) << '\t' <<'\t' << "|" << '\t' << 120.0 << '\t' << fshrenheit_to_cels(120.0) << endl;
	cout << 39.0 << '\t' << celsius_to_fah(39.0) << '\t' <<'\t' << "|" << '\t' << 110.0 << '\t' << fshrenheit_to_cels(110.0) << endl;
	cout << 38.0 << '\t' << celsius_to_fah(38.0) << '\t' <<'\t' << "|" << '\t' << 100.0 << '\t' << fshrenheit_to_cels(100.0) << endl;
	cout << 37.0 << '\t' << celsius_to_fah(37.0) << '\t' <<'\t' << "|" << '\t' << 90.0 << '\t' << fshrenheit_to_cels(90.0) << endl;
	cout << 36.0 << '\t' << celsius_to_fah(36.0) << '\t' <<'\t' << "|" << '\t' << 80.0 << '\t' << fshrenheit_to_cels(80.0) << endl;
	cout << 35.0 << '\t' << celsius_to_fah(35.0) << '\t' <<'\t' << "|" << '\t' << 70.0 << '\t' << fshrenheit_to_cels(70.0) << endl;
	cout << 34.0 << '\t' << celsius_to_fah(34.0) << '\t' <<'\t' << "|" << '\t' << 60.0 << '\t' << fshrenheit_to_cels(60.0) << endl;
	cout << 33.0 << '\t' << celsius_to_fah(33.0) << '\t' <<'\t' << "|" << '\t' << 50.0 << '\t' << fshrenheit_to_cels(50.0) << endl;
	cout << 32.0 << '\t' << celsius_to_fah(32.0) << '\t' <<'\t' << "|" << '\t' << 40.0 << '\t' << fshrenheit_to_cels(40.0) << endl;
	cout << 31.0 << '\t' << celsius_to_fah(31.0) << '\t' <<'\t' << "|" << '\t' << 30.0 << '\t' << fshrenheit_to_cels(30.0) << endl;
	return 0;
}