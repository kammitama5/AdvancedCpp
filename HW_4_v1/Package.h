#ifndef PACKAGE_
#define PACKAGE_

#include <string>
using std::string;

class Package{

private:
	string name;
	string address;
	string city;
	string state;
	string senderzip;
	string reczip;
	double weight;
	double costperounce;
	
public:
	Package(const string &, const string &, const string &, const string &, const string &, const string &,
		double = 0.0, double = 0.0);

	// getters and setters

	void setName(const string &);
	string getName() const;

	void setAddress(const string &);
	string getAddress() const;

	void setCity(const string &);
	string getCity() const;

	void setState(const string &);
	string getState() const;

	void setSenderZip(const string &);
	string getSenderZip() const;

	void setRecZip(const string &);
	string getRecZip() const;

	void setWeight(const double &);
	double getWeight() const;

	void setCostPerOunce(const double &);
	double getCostPerOunce() const;


	double calculateCost(double, double); // multiply weight * cost per ounce


};
#endif