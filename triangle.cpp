#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
	public:
	Triangle(double bes, double hei)
	{
		base = bes;
		height = hei;
	}
	void setBase(double b)
	{
		base = b;
	}
	void setHeight(double h)
	{
		height = h;
	}
	double getArea(double h, double b)
	{
		double area = (b*h)/2;
		return area;
	}
	double getHypotenuse(double h, double b)
	{
		double hypotenuse = hypot(h,b);
		return hypotenuse;
	}
    private:
	double base;
	double height;
	};
int main()
{
	Triangle tri(0.0,0.0);
	tri.setBase(4.0);
	tri.setHeight(3.0);
	cout << "Area is :"  << tri.getArea(4.0,3.0) << endl;
	cout <<"Hypotenuse is : " << tri.getHypotenuse(4.0,3.0) << endl;
	}
