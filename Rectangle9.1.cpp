#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{
public:

	double width;
	double height;



	Rectangle()
	{
		width = 1;
		height = 1;
	}


	Rectangle(double newWidth, double newHeight)
	{
		width = newWidth;
		height = newHeight;
	}

	
	double getArea()
	{
		return width * height;
	}

	double getPerimeter()
	{
		return (height + width) * 2;
	}
};  

int main()
{
	double x, y, a, b;
	cin >> x >> y >> a >> b;
	Rectangle rectangle1(x,y);
	Rectangle rectangle2(a,b);

	 
	cout <<fixed<<setprecision(2)<< rectangle1.getArea() << " " << rectangle1.getPerimeter() << endl;
	cout << fixed << setprecision(2) << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;


	rectangle2.width = 5.0;
	rectangle2.height = 2.5;
	cout << fixed << setprecision(2) << rectangle2.getArea() << " " << rectangle2.getPerimeter() << endl;

	return 0;
}
