#include <iostream>
#include "Master.h"
#include "Bachelor.h"
#include "Doctoral.h"

#include<vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void virtualViaPointer(Bachelor * const);

int main(int argc, char** argv) 
{
	Master m1("Ricardo","Charles","","Research Assistant",16,3);
	Master m2("Jones","Benz","","Research Assistant",4,1);
	
	Doctoral d1("Andrew","Liang","","Assistant Professor",26,8,18,13);
	Doctoral d2("Lilian","Bartez","","Professor",13,2,23,5);
	
	vector < Bachelor * > ali(4);
	ali.at(0)=&m1;
	ali[1]=&m2;
	ali.at(2)=&d1;
	ali[3]=&d2;
	
	for(int i=0; i<ali.size(); i++)
	{
		//ali[i]->printResume();
		//cout << "Performance: " << ali[i]->performance();
		//cout << endl << endl;
		virtualViaPointer(ali[i]);
	}
	
	return 0;
}

void virtualViaPointer(Bachelor * const bPtr)
{
	bPtr->printResume();
	cout << "Performance: " << bPtr->performance();
	cout << endl << endl;
}
