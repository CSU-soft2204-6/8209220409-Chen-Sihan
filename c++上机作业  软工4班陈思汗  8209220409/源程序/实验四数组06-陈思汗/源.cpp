#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int size = strlen(s);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if ((s[i] + 0) == (65 + j) || (s[i] + 0) == (97 + j))//ÓÃASCIIÂëÀ´ÅÐ¶Ï
				counts[j]++;
		}
	}
}
int main()
{
	char s[10000];
	int counts[26] = { 0 };
	cout << "Enter a string :";
	gets_s(s);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			char letter = i + 97;
			cout << letter << ':' << ' ' << counts[i] << ' ' << "times" << endl;
		}
	}
	return 0;
}