/*******************************************************/
/* This program is created by Damilare Ezekiel Adewale, /
/* Masters in Computer System Engineering student at the/
/* University of Glamorgan, Pontypridd. UK              /
/* Created for Microsoft Corporation.                   /
/*******************************************************/

/* This is the resource file MakeChange, that includes the header
// file MakeChange.h
/  It contains two functions named "accessChange", and "bankNotes".
/  The Function accessChange is accessible to the public, while the 
// Function bankNotes is made private*/

#include <iostream>
using namespace std;

// Include the Header File MakeChange.h
#include "MakeChange.h" 


// Create a publicly accessible void Funtion "accessChange", 
// which takes in a pointer to a variable as its argument
// Whenever a user needs to access this function, only 
// the address of the supplied value needs to be supplied, 
// and this function calls on a private function "bankNotes" 
// declared below to manipulate the value sitting in that memory location

//" *sel is a pointer parameter that holds the address of a variable
void MakeChange::accessChange(int* sel)
{
		// Initialize a local counter variable
	    int i=0;

		// Print out the preceeding message
		cout<<"Your change is: \n";

		// Start the loop that will check the validity of the money supplied,
		// Which has to be greater than Zero
		while(*sel>0)
		{
			bankNotes(sel);  // Call on the private function bankNotes 
			                 // Declared below and pass in the address of the variable
			
			i++;             // Increment the counter
		}
}


// This private function "bankNotes" takes in the address of a supplied money variable
// and checks whether it is equal to zero first; If it is, an exit function is called,
// If not, it starts comparing the value of the money with the least denomination available
// The Denominations available are 100 Dollar Bills, 50 Dollar bills, 20 Dollar Bills, 
// 10 Dollar bills, 5 Dollar Bills and 1 Dollar Bills
void MakeChange::bankNotes(int *money)
{
// Initialize a counter, which signifies how many of each denomination is needed
	int count=0; 

// is there any change to collect at all?	
	if(*money==0) 
	    {
// if Yes, output no change			
			cout<<"No Change"<<endl;  
// end the program		
		exit(1);          
		}
// If there is change		
	else                          
	{

// Start comparing with the least denomination possible first which in this case is equal to 1 dollar
		if((*money>=1)&&(*money<5))   
		{                             
// Start a loop to count the number of one dollar bills needed	  
		  while(*money>=1)           
			{
			*money-=1;
			 count++;
			}
// Output the number of times the counter was incremented, which represents how many 1 dollar bills was counted
		cout<< count <<" One Dollar Bills, \n";
		}


// Jump to the next denomination available, which is 5 dollar bills
    	if((*money>=5)&&(*money<10))
		{
// Start a loop to count the number of 5 dollar bills needed	  
		  while(*money>=5)
			{
			*money-=5;
			 count++;
			}
// Output the number of times the counter was incremented, which represents how many 5 dollar bills was counted
		cout<< count <<" Five Dollar Bills, \n";
		}


// Jump to the next denomination available, which is 10 dollar bills
		if((*money>=10)&&(*money<20))
		{
// Start a loop to count the number of 10 dollar bills needed	  		   
		  while(*money>=10)
			{
			*money-=10;
			 count++;
			}
// Output the number of times the counter was incremented, which represents how many 10 dollar bills was counted
		cout<< count <<" Ten Dollar Bills, \n";
		}


// Jump to the next denomination available, which is 20 dollar bills
   		if((*money>=20)&&(*money<50))
		{
// Start a loop to count the number of 10 dollar bills needed	  		   
	 	  while(*money>=20)
			{
			*money-=20;
			 count++;
			}
// Output the number of times the counter was incremented, which represents how many 20 dollar bills was counted
		cout<< count <<" Twenty Dollar Bills, \n";
		}


// Jump to the next denomination available, which is 50 dollar bills
		if((*money>=50)&&(*money<100))
		{
// Start a loop to count the number of 50 dollar bills needed	  		   
		   while(*money>=50)
			{
			*money-=50;
			 count++;
			}
// Output the number of times the counter was incremented, which represents how many 50 dollar bills was counted
		cout<< count <<" Fifty Dollar Bills, \n";
		}


// Jump to the next denomination available, which is 100 dollar bills
		if(*money>=100)
		{
// Start a loop to count the number of 100 dollar bills needed	  		   
		   while(*money>=100)
			{
			*money-=100;
			 count++;
			}
// Output the number of times the counter was incremented, which represents how many 100 dollar bills was counted
		cout<< count <<" Hundred Dollar Bills, \n";
		}
	} // End the ELSE statement
}  // End the function "bankNotes"
