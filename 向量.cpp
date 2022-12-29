/***************************
 *     学生的标准分数      *
****************************/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<double> scorevector;
	double max, temp;
	cout << "Enter -1 to stop:" << endl;
	cout << "Enter the original score1:";
	cin >> max;
	scorevector.push_back(max);
	for (int i = 1; true; i++)
	{
		cout << "Enter the original score" << i + 1 << ":";
		cin >> temp;
		if (temp == -1)
			break;
		scorevector.push_back(temp);
		if (temp > max)
		{
			max = temp;
		}
	}
	max /= 100;
	cout << "Output the standard score" << endl;
	for (int i = 0; i < scorevector.size(); i++)
	{
		cout << scorevector[i] / max << "\t";
	}
	return 0;
}