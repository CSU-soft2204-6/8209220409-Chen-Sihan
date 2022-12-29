#include<iostream>
using namespace std;
template<class TNO,class TScore,int num>
class Student {
private:
	TNO StudentID[num];
	TScore score[num];
	int n;
public:
	void append(TNO ID, TScore s);
	void Delete(TNO ID);
	int search(TNO ID);
	void sort();
	void DispAll();
	Student() {
		this->n = 0;
	};
};
template<class TNO,class TScore,int num>
void Student <TNO,TScore,num>::append(TNO ID,TScore s)
{
	if (n < num)
	{
		StudentID[n] = ID;
		score[n] = s;
		n++;
	}
}
template<class TNO,class TScore,int num>
void Student<TNO, TScore, num>::Delete(TNO ID)
{
	for (int i = 0; i < n; i++)
	{
		if (StudentID[i] == ID)
		{
			for (int j = i; j < n; j++)
			{
				StudentID[j] = StudentID[j + 1];
				score[j] = score[j + 1];
			}
			n--;
		}
	}
}
template<class TNO,class TScore,int num>
int Student<TNO, TScore, num>::search(TNO ID)
{
	for (int i = 0; i < n; i++)
	{
		if (StudentID[i] == ID)
		{
			return i + 1;
		}
	}
	return 0;
}
template<class TNO,class TScore,int num>
void Student<TNO, TScore, num>::sort()
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (score[i] >= score[j])
			{
				int t;
				t = i, i = j, j = t;
			}
		}
	}
}
template<class TNO,class TScore,int num>
void Student <TNO, TScore, num>::DispAll()
{
	for (int i = 0; i < n; i++)
	{
		cout << StudentID[i] << '\t' << score[i] << endl;
	}
}
class String {
public:
	char str[20];
	String(const char s[20])
	{
		for (int i = 0; i < 20; i++)
		{
			this->str[i] = s[i];
		}
	}
};
int main() {
	Student<long, float, 100> group1;
	//String csh("chensihan");
	group1.append(220409, 95);
	group1.DispAll();
	return 0;
}