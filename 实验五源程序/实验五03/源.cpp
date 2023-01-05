#include<iostream>
using namespace std;
class countvolume
{
private:
	double length, width, height;
	double volume;
public:
	void setdata()
	{
		double L, W, H;
		cin >> L >> W >> H;
		length = L;
		width = W;
		height = H;
	}
	void count()
	{
		volume=length*width*height;
	}
	void showvolume() 
	{
		cout << volume << endl;
	}
};
int main()
{
	countvolume a1, a2, a3;
	cout << "Please input a1's length,width and height" << ' ';
	a1.setdata();
	a1.count();
	cout << "a1's volume is" << ' ';
	a1.showvolume();
	cout << "Please input a2's length,width and height" << ' ';
	a2.setdata();
	a2.count();
	cout << "a2's volume is" << ' ';
	a2.showvolume();
	cout << "Please input a3's length,width and height" << ' ';
	a3.setdata();
	a3.count();
	cout << "a3's volume is" << ' ';
	a3.showvolume();
	return 0;
}