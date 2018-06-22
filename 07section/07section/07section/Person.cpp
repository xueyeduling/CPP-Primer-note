#include "Person.h"
using std::string;
using std::endl;

istream &read(istream &istr, Person &per)
{
	return per.myread(istr);
}

ostream &print(ostream &ostr, Person &per)
{
	return per.myprint(ostr);
}

Person::Person(string f, string l, string a) :firstName(f), lastName(l), address(a) { }