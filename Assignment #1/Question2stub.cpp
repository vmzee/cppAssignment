/*
 *  Question2.cpp
 *
 *  Name:           [ Benjamin Effiong Uwak ]
 *  Department:     [ Computer science ]
 *  Matric. No:     [ 45303159DG ]
 *
 *  Program that reads two integers and determines
 *  if first is a multiple of second
 *
 *  Stub file to enable you complete assignment #1 - question #2
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    int num1;
    int num2;
    
    // display welcome messages to user
    cout << "Welcome - This program reads two integers\n";
    cout << "and determines if first is a multiple of second\n\n";
    
    // Read first integer
    cout << "Enter first integer value -  ";
    
    cin >> num1;
    
    // read second integer
    cout << "Enter second integer value -  ";
    
    cin >> num2;
	
	if ( num1 % num2 == 0 )
	cout << num1 << " is a multiple of " << num2 << endl;
	
	if ( num1 % num2 != 0)
	cout << num1 << " is not a multiple of " << num2 << endl;
    
    cout << "\nThanks and Goodbye";
    
    return 0;
}
