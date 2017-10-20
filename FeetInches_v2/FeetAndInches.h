#ifndef FEETANDINCHES_
#define FEETANDINCHES_

using std::ostream;
using std::istream;

using std::string;

class FeetAndInches{


	friend ostream &operator<<( ostream &, const FeetAndInches &);
	friend istream &operator>>( istream &, FeetAndInches & );

	//somthing something osstream and isstream
public:
	
	~FeetAndInches(); // destructor
	FeetAndInches(int, int); // if both feet and inches are zero
	void FeetAndInchesToDecimal(int totalfeet); // sets feet and inches to decimal (total inches)



	// accessors -> 
	int getTotalInches(void) const; // get total inches
	void setTotalInches(int totalInches);

	int getTotalFeet(void) const; //get total Feet
	void setTotalFeet(int totalfeet); //set total feet

	int getFeet(void) const; // get feet
	void setFeet(int feet); // set feet

	int getInches(void) const; // get inches
	void setInches(int inches); // set inches


	// overloaded operator functions
	FeetAndInches()
	{
	FeetAndInches operator+(FeetAndInches &totalinches);// operator
		{
		FeetAndInches temp;

		if ((!temp.inches == 0) && (!temp.feet == 0))
		{

			temp.inches = inches + temp.inches;
			if (temp.inches % 12 == 0)
			{
				temp.feet = feet + (temp.inches / 12);
			}

		}
		
		}
	}// operator overload

	FeetAndInches operator + (FeetAndInches &test); // addition
	FeetAndInches operator - (FeetAndInches &test); //subtraction


	FeetAndInches operator!=(FeetAndInches &test); // not equal
	FeetAndInches operator==(FeetAndInches &test); // equal

	FeetAndInches operator <<(FeetAndInches &test); // << overloaded
	FeetAndInches operator >>(FeetAndInches &test); // >> overloaded

	FeetAndInches operator >(FeetAndInches &test); // > overloaded
	FeetAndInches operator <(FeetAndInches &test); // < overloaded
	FeetAndInches operator >=(FeetAndInches &test); // >= overloaded
	FeetAndInches operator <=(FeetAndInches &test); // <= overloaded

private:
	int feet;
	int inches;
	int totalinches;
	int totalfeet;

};
#endif