#ifndef BACHELOR_H
#define BACHELOR_H

#include<iostream>
#include<string>
#include<iomanip>
#include<stdexcept>
#include<cmath>
#include<cstdlib>

using namespace std;

class Bachelor
{
	public:
		Bachelor(const string &, const string &, const string &, const string &);
		~Bachelor();
		
		void setFirstName(const string &);
		void setLastName(const string &);
		void setUniversity(const string &);
		void setTitle(const string &);
		
		string getFirstName() const;
		string getLastName() const;
		string getUniversity() const;
		string getTitle() const;
		
		virtual void printResume() const;
		virtual double performance()=0;
		
	private:
		string firstName;
		string lastName;
		string university;
		string title;
};

#endif