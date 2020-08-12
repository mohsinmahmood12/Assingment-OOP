#include<iostream>
using namespace std;
class Geometryshape
{
public:
	virtual void show() = 0;
};
class Rectangle :public Geometryshape
{
protected:
	int length, width;
public:
	void setlength(int a)
	{
		length = a;
	}
	void setwidth(int b)
	{
		width = b;
	}
	int getlength()const
	{
		return length;
	}
	int getwidth()const
	{
		return width;
	}
	void computeArea()
	{
		cout << "The area of rectangle is:" << length * width << endl;
	}
	void show()
	{
		cout << "The length of rectangle is:" << length << endl;
		cout << "The width of rectangle is:" << width << endl;
	}
};
class Cuboid :public Rectangle
{
public:
	int	height;
	void setheight(int c)
	{
		height = c;
	}
	int getheight()const
	{
		return height;
	}
	void computeArea()
	{
		cout << "The area of cuboid is:" << length * width * height << endl;
	}
	void show()
	{
		cout << "The length of cuboid is:" << length << endl;
		cout << "The width of  cuboid is:" << width << endl;
		cout << "The height of cuboid is:" << height << endl;
	}

};
int main()
{
	Geometryshape* G;
	Rectangle R;
	Cuboid C;
	G = &R;
	Rectangle* R1;
	R.setlength(15);
	R.setwidth(20);
	R.computeArea();
	G->show();
	cout << "\n";
	G = &C;
	C.setlength(13);
	C.setwidth(30);
	C.setheight(17);
	C.computeArea();
	G->show();

}
