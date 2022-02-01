#include <iostream>
using namespace std;

class Property
{
	Property();
	~Property();
	virtual int tax();
	int worth();
};

Property::Property()
{
	Property::worth++;
}

Property::~Property()
{
	Property::worth++;
}

class Appartment:Property
{
public:
	Appartment();
	~Appartment();

private:

};

Appartment::Appartment()
{
}

Appartment::~Appartment()
{
}

class Car:Property
{
public:
	Car();
	~Car();

private:

};

Car::Car()
{
}

Car::~Car()
{
}

class CountryHouse:Property
{
public:
	CountryHouse();
	~CountryHouse();

private:

};

CountryHouse::CountryHouse()
{
}

CountryHouse::~CountryHouse()
{
}

int main()
{
	Property* M[7];
	M[0] = new Appartment;
	M[1] = new Appartment;
	M[2] = new Appartment;
	M[3] = new Car;
	M[4] = new Car;
	M[5] = new CountryHouse;
	M[6] = new CountryHouse;
	for (int i = 0;i < 7;i++) {
		delete M[i];
	}
}

