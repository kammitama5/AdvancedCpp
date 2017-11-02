#include <iostream>
#include <string>

using std::cout;

#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"

//constructor
Package::Package(const string &name_, const string & address_, const string & city_, const string & state_, const string & senderzip_, const string & reczip_,
	double weight_, double costperounce_)
{
	name = name_;
	address = address_;
	city = city_;
	state = state_;
	senderzip = senderzip_;
	reczip = reczip_;
	setWeight(weight_);
	setCostPerOunce(costperounce_);
}

void Package::setName(const string &name_)
{
	name = name_;
}
string Package::getName() const
{
	return name;
}

void Package::setAddress(const string &address_)
{
	address = address_;

}
string Package::getAddress() const
{
	return address;
}

void Package::setCity(const string &city_)
{
	city = city_;
}
string Package::getCity() const
{
	return city;
}

void Package::setState(const string &state_)
{
	state = state_;
}

string Package::getState() const
{
	return state;
}


void Package::setSenderZip(const string &senderzip_)
{
	senderzip = senderzip_;
}

string Package::getSenderZip() const
{

	return senderzip;
}


void Package::setRecZip(const string &reczip_)
{
	reczip = reczip_;

}

string Package::getRecZip() const
{
	return reczip;
}


void Package::setWeight(const double &weight_)
{
	weight = (weight_ < 0.0) ? 0.0 : weight_;
}

double Package::getWeight() const
{
	return weight;
}

void Package::setCostPerOunce(const double &costperounce_)
{
	costperounce = (costperounce_ < 0.0) ? 0.0 : costperounce_;
}

double Package::getCostPerOunce() const
{
	return costperounce;
}



double Package::calculateCost() const
{

	return getWeight() * getCostPerOunce();
}
