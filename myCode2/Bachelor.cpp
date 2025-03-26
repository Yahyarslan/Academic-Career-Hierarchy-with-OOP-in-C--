#include "Bachelor.h"

Bachelor::Bachelor(const string &first, const string &last,
					 const string &u, const string &t)
{
	setFirstName(first);
	setLastName(last);
	setUniversity(u);
	setTitle(t);
}

Bachelor::~Bachelor()
{
}

void Bachelor::setFirstName(const string &first)
{
	firstName=first;
}
void Bachelor::setLastName(const string &last)
{
	lastName=last;
}
void Bachelor::setUniversity(const string &u)
{
	university=u;
}
void Bachelor::setTitle(const string &t)
{
	title=t;
}
		
string Bachelor::getFirstName() const
{
	return firstName;
}
string Bachelor::getLastName() const
{
	return lastName;
}
string Bachelor::getUniversity() const
{
	return university;
}
string Bachelor::getTitle() const
{
	return title;
}
		
void Bachelor::printResume() const
{
	cout << "Name: " << getFirstName() << endl
		<< "Surname: " << getLastName() << endl
		<< "Title: " << getTitle() << endl;
}