/*******************************************************/
/* This program is created by Damilare Ezekiel Adewale, /
/* Masters in Computer System Engineering student at the/
/* University of Glamorgan, Pontypridd. UK              /
/*******************************************************/

/*********************************************************************/
/* This is the main function used to test the created class MakeChange/
/  it is created takes in just one variable, representing the amount  /
/  of money to be given to a customer as a change, and split it into  /
/  the number of denomination needed, according to the notes available/
/*********************************************************************/

#include <iostream>
#include "MakeChange.h"
using namespace std;

// Main Program Starts From Here
int main()
{
	// Declare a variable mny to be used to test the class MakeChange
	int mny; 
	
	// Instantiate or Create an object of the Class MakeChange
	MakeChange giveBack;

	// Request for a change to be given
	cout<< "How Much is The Change? : ";

	// Store the amount of money supplied in the memory
	cin>> mny;

	// Jump two lines
	cout << endl <<endl;

	// Call on the publicly accessible funtion accessChange,
	// and pass the ADDRESS of the money received 
	giveBack.accessChange(&mny);
	
	// Jump a line
	cout << endl;
}
