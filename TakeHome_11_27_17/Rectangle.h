#ifndef RECTANGLE_
#define RECTANGLE_

using std::ostream;
using std::istream;



using namespace std;
	

template <class T>
class Rectangle{

	friend ostream& operator<<(ostream& output, const Rectangle<T> &r);
	friend istream& operator>>(istream& input, Rectangle<T> &r);

	private:
		T length, width;
	public:
		//constructor set to 0
		Rectangle()
		{
			length = 0;
			width = 0;
		}
		Rectangle(T l, T w)
		{
			length = l;
			width = w;
		}

		void setLength(T l)
		{
			length = l;
		}

		void setWidth(T w)
		{
			width = w;
		}

		void getLength() const
		{
			return length;
		}

		void getWidth() const
		{
			return width;
		}

		T calcPerimeter() const;
		T calcArea() const;

		
	};
/*

In the following class declaration the width and length members are of type double.
Rewrite the class as a template that will accept any numeric type for its members.  Add all implementations as needed.
Write a client program to test your new class


class Rectangle
{
	//overloaded << and >>  (should be simple since template is the same for all
	// numeric types)
	friend ostream &operator<<(ostream&, const Rectangle&);
	friend istream &operator>>(istream&, Rectangle&);

private:
	double width;
	double length;
public:
	Rectangle();  //sets length and width to 0
	Rectangle(double, double);
	double getWidth();
	double getLength();
	bool setWidth(double w);
	bool setLength(double l);
	double calcArea();
	double calcPerimeter();
};
#endif
/*
I will help you with this, raise your hand if you're having problems! We'll discuss it!
Submit on Moodle when you are finished
*/
#endif