#include "Master.h"

Master::Master(const string &first, const string &last,
				 const string &u, const string &t, int noa, int nop)
			: Bachelor(first,last,u,t)
{
	setNOAMaster(noa);
	setNOPMaster(nop);
}

void Master::setNOAMaster(int noa)
{
	NOAMaster=noa;
}
void Master::setNOPMaster(int nop)
{
	NOPMaster=nop;
}
		
int Master::getNOAMaster() const
{
	return NOAMaster;
}
int Master::getNOPMaster() const
{
	return NOPMaster;
}
		
void Master::printResume() const
{
	Bachelor::printResume();
	cout << "NOA Master: " << getNOAMaster() << endl 
		<< "NOP Master: " << getNOPMaster() << endl;
}
		
double Master::performance()
{
	return ( 12.0+6.2*getNOAMaster()+14.5*getNOPMaster() );
}
		