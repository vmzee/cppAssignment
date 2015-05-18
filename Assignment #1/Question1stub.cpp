/*
 *  Question1.cpp
 *
 *  Name:           [ Benjamin effiong uwak ]
 *  Department:     [ computer science ]
 *  Matric. No:     [ 45303159DG ]
 *
 *  Program that reads an integer and determines
 *  and prints whether it’s odd or even
 *
 *  Stub file to enable you complete assignment #1 - question #1
 */

#include <iostream>
using namespace std;

int main()
{
    // declare variable to hold integer value
    int integer;
    
    // display welcome messages to user
    cout << "Welcome - This program reads an integer\n" << endl;
    cout << "and determines if it is odd or even\n\n" << endl;
    
    // TODO: Enter code to read integer and store in variable value
    cout << "Please enter an integer value -  "
    
    <<endl;
    
    	cin >> integer;
	
	//determine if integer is odd or even
	
	
	if (integer % 2== 0 )
	
	// if integer when divided by 2 has no remainder then it is even
	
	cout << integer << " is even "
	    << endl;
	 
	 
	 else
	 
	 //the integer is odd
	 
	 
	 cout << integer << " is odd "
	 << endl;
    
    return 0;
}
