#include<iostream>
using namespace std;
int GMF(int a,int b)
{
	int gmf,min;
	min = a < b ? a : b;
	for (min; min > 1; min--)
	{
		if ((a % min == 0) && (b % min == 0))
			break;
	}
	return min;
}
int LCM(int a, int b)
{
	int lcm, max;
	max = a > b ? a : b;
	for (max; max < (a*b); max++)
	{
		if ((max % a == 0) && (max % b == 0))
			break;
	}
	return max;
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "m和n的最大公因数为" << GMF(m, n) << endl;
	cout << "m和n的最小公倍数为" << LCM(m, n) << endl;
	return 0;
}
