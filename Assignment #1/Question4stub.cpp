/*
 *  Question4.cpp
 *
 *  Name:           [ Benjamin Effiong Uwak ]
 *  Department:     [ Computer science ]
 *  Matric. No:     [ 45303159DG ]
 *
 *  Program that inputs a five-digit integer,
 *  separates the integer into its digits and prints them separated by three spaces each
 *
 *  Stub file to enable you complete assignment #1 - question #4
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declaration
    int digits;
    
    // display welcome messages to user
    cout << "Welcome - This program reads a five-digit integer\n";
    cout << "separates the integer into its digits and prints them\n";
    cout << "separated by three spaces each\n\n";
    
    	cout << " Hello  \n" <<endl << "Enter an integer of five digit ";
	
	char inputNumber[6];
	cin >> inputNumber;
	
	cout << "----------------------------_\n" << " your number is ";
	for ( int i=0; i<5; i++)
{
	if ( i==4)
	cout << inputNumber [i] <<endl;
	
	else
	
	cout << inputNumber[i] << " ";
}

char a;
cin >> a;
    
    cout << "\nThanks and Goodbye";
    
    return 0 ;
}
