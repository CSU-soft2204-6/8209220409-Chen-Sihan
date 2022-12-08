#include<iostream>
using namespace std;
bool is_prime(int num);
int main()
{
	int m=2,n=0;
	while(n<200)
	{
		for (int p=0; ; )
		{
			if (is_prime(m) == 1)
			{
				n += 1; p += 1;
				cout << m << ' ';
			}
			m++;
			if (p == 10)
				break;
		}
		cout << endl;
	}
	return 0;
}
bool is_prime(int num)
{
	int i = num-1;
	for (i; i > 1; i--)
	{
		if (num % i == 0)
			break;
	}
	if (i == 1)
		return true;
	else
		return false;
}