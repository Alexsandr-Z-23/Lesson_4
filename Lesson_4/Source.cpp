#include<iostream>
using namespace std;

class Point
{private:
	double x = 0.0;
	double y = 0.0;

public:
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	Point& move(double x, double y)
	{
		this->x += x;
		this->y += y;
		return *this;
	}
	double get_X(){ return x; }
	double get_Y(){ return y; }
	void set_X(double value) { x = value; };
	void set_Y(double value) { y = value; };
	void Print_rez();
};

void Point::Print_rez()
{
	cout << "1- ( " << get_X() << "; " << get_Y() << " )" << endl;
}




int main()
{
	Point a(8.6,4.5), b(7.8,6.2);
	//a.set_X(6.3);
	//a.set_Y(4.5);
	a.Print_rez();
	a.move(4.9, 8.1).move(10.1, 9.8);
	a.Print_rez();
	/*b.set_X(4.8);
	b.set_Y(6.3);*/
	/*b.Print_rez();*/


	return 0;
}