#include<iostream>
#include"开方.h"
using namespace std;
const double PI = 3.14;
class Shape
{
public:
	virtual double area() const = 0;
	virtual void showarea() const = 0;
};
class Circle :public Shape
{
private:
	double radius;
public:
	Circle(double r = 0)
	{
		this->radius = r;
	}
	double area() const
	{
		return PI * radius * radius;
	}
	void showarea() const
	{
		cout << "此圆的面积为：" << ' ' << area() << endl;
	}
};
class Square :public Shape
{
private:
	double length;
public:
	Square(double a = 0)
	{
		this->length = a;
	}
	double area() const
	{
		return length * length;
	}
	void showarea() const
	{
		cout << "此正方形的面积为：" << ' ' << area() << endl;
	}
};
class Retangle :public Shape
{
private:
	double length;
	double width;
public:
	Retangle(double a = 0, double b = 0)
	{
		this->length = a;
		this->width = b;
	}
	double area() const
	{
		return length * width;
	}
	void showarea() const
	{
		cout << "此长方形的面积为：" << ' ' << area() << endl;
	}
};
class Trapezoid :public Shape
{
private:
	double upper;
	double lower;
	double height;
public:
	Trapezoid(double a = 0, double b = 0, double h = 0)
	{
		this->upper = a;
		this->lower = b;
		this->height = h;
	}
	double area() const
	{
		return (upper + lower) * height / 2;
	}
	void showarea() const
	{
		cout << "此梯形的面积为：" << ' ' << area() << endl;
	}
};
class Triangle :public Shape
{
private:
	double a, b, c;
public:
	Triangle(double a = 0, double b = 0, double c = 0)
	{
		if ((a + b) < c || (a + c) < b || (b + c) < a)
		{
			cout << "这无法构成三角形" << endl;
		}
		else
		{
			this->a = a;
			this->b = b;
			this->c = c;
		}
	}
	double area() const
	{
		double p = (a + b + c) / 2;
		return squa(p * (p - a) * (p - b) * (p - c));
	}
	void showarea() const
	{
		cout << "此三角形的面积为：" << ' ' << area() << endl;
	}
};
int main()
{
	Circle circle(10.2);
	Square square(3);
	Retangle retangle(3, 4);
	Trapezoid trapezoid(2.0, 4.5, 3);
	Triangle triangle(4, 5, 6);
	Shape* shape[5];
	shape[0] = new Circle(circle);
	shape[1] = new Square(square);
	shape[2] = new Retangle(retangle);
	shape[3] = new Trapezoid(trapezoid);
	shape[4] = new Triangle(triangle);
	for (int i = 0; i < 5; i++)
	{
		shape[i]->showarea();
	}
	double total = 0;
	for (int i = 0; i < 5; i++)
	{
		total += shape[i]->area();
	}
	cout << "总面积为:" << ' ' << total;
}