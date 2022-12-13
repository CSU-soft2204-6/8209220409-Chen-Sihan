#include<iostream>
using namespace std;
class complex
{
public:
	double real;
	double image;
public:
	complex() {
		real = 0; image = 0;
	}
	complex(double a, double b)
	{
		real = a;
		image = b;
	}
	void display()
	{
		cout << "real is:" << real << ' ';
		cout << "image is:" << image<<endl;
	}
	/*friend complex operator +(complex a, complex b)
	{
		return complex(a.real + b.real, a.image + b.image);
	}
	friend complex operator -(complex a, complex b)
	{
		return complex(a.real - b.real, a.image - b.image);
	}
	friend complex operator ++(complex& a)
	{
		return complex(++a.real , a.image );
	}
	friend complex operator ++(complex &a,int)
	{
		return complex(a.real++ , a.image );
	}*/
	complex operator +(complex b)
	{
		return complex(this->real + b.real, this->image + b.image);
	}
	complex operator -(complex b)
	{
		return complex(this->real - b.real, this->image - b.image);
	}
	complex operator ++()
	{
		return complex(++this->real, this->image);
	}
	complex operator ++(int)
	{
		return complex(this->real++, this->image);
	}
};
/*class human
{
public:
	int know;
public:
	human() {
		know = 0;
	}
	void learn()
	{
		know++;
	}
};
class student:public human
{
public:
	void learn()
	{
		know += 2;
	}
};*/
int main() {
	complex comp1(3.1,2.7);
	comp1.display();
	complex comp2(2.0, 2.0);
	comp2.display();
	complex comp3=comp1 + comp2;
	comp3.display();
	comp3++;
	comp3.display();
	++comp3;
}