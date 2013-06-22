/*******************************************************/
/* This program is created by Damilare Ezekiel Adewale, /
/* Masters in Computer System Engineering student at the/
/* University of Glamorgan, Pontypridd. UK              /
/* Created for Microsoft Corporation.                   /
/*******************************************************/

// This is the header file for MakeChange.cpp
// It contains two functions, one public and one private
// It also contains two private variables "i" and "count"
#include <iostream>
using namespace std;

class MakeChange
{
public:
	void accessChange(int*);  // Accessible to the public to get the amount of change
private:
	void bankNotes(int*);    //Inaccessible to the public, used for the actual currency manipulations
	int count;
	int i;
};