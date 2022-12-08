#include<iostream>
using namespace std;
int squ(int x, int y)
{
	if (y == 0)
		return 1;
	else
		return x * squ(x, y - 1);
}
int parseHex(const char* const hexstring)
{
	int size = strlen(hexstring);
	int* p, answer = 0;
	p= new int[size];
	for (int i = 0; i < size; i++)
	{
		if ('0' <= hexstring[i] && hexstring[i] <= '9')
			p[i] = hexstring[i] - 48;
		else if ('a' <= hexstring[i] && hexstring[i] <= 'f')
			p[i] = hexstring[i] - 87;
		else if ('A' <= hexstring[i] && hexstring[i] <= 'f')
			p[i] = hexstring[i] - 55;
		answer += p[i] * squ(16, size - i - 1);
	}
	delete[]p;
	return answer;
}
int main()
{
	char hexstring[1000];
	cin >> hexstring;
	int answer = parseHex(hexstring);
	cout << "在十进制中等于" << answer;
	return 0;
}
