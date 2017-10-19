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
	void FeetAndInchesToDecimal(int, int, int); // sets feet and inches to decimal (total inches)

	// accessors -> do I need these?
	//int getTotalInches(void) const;
	//void setTotalInches(int totalInches);

	//mutators

	// overloaded operator functions
	FeetAndInches()
	{
	FeetAndInches operator+(FeetAndInches &totalinches);// operator
		{
		FeetAndInches temp;
		temp.inches = inches + temp.inches;
		temp.feet = feet + totalfeet + (temp.inches);
		temp.inches = (temp.inches) % 12;
		
		}
	}// operator overload

	FeetAndInches operator!=(FeetAndInches &totalinches); // not equal
	FeetAndInches operator==(FeetAndInches &totalinches); // equal

private:
	int feet;
	int inches;
	int totalinches;
	int totalfeet;

};
#endif