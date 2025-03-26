#include "Doctoral.h"

Doctoral::Doctoral(const string &first, const string &last,
		const string &u, const string &t,int noa, int nop, int noaphd, int nopphd)
		:	Master(first,last,u,t,noa,nop)
{
	setNOAPhd(noaphd);
	setNOPPhd(nopphd);
}

void Doctoral::setNOAPhd(int noaphd)
{
	NOAPhd=noaphd;
}
void Doctoral::setNOPPhd(int nopphd)
{
	NOPPhd=nopphd;
}
		
int Doctoral::getNOAPhd() const
{
	return NOAPhd;
}
int Doctoral::getNOPPhd() const
{
	return NOPPhd;
}
		
void Doctoral::printResume() const
{
	Master::printResume();
	cout << "NOA Phd: " << getNOAPhd() << endl
		<< "NOP Phd: " << getNOPPhd() << endl;
}

double Doctoral::performance()
{
	return ( Master::performance()+8.5*getNOAPhd()+26.5*getNOPPhd() );
}