/*
 *  Question5.cpp
 *
 *  Name:           [ Benjamin Effiong Uwak ]
 *  Department:     [ Computer science ]
 *  Matric. No:     [ 45303159DG ]
 *
 *  Program that calculates the squares and cubes of the integers from 0 to 10
 *
 *  Stub file to enable you complete assignment #1 - question #5
 */

#include <iostream>
#include <math.h>   // library to use pow() function to calculate squares and cubes
using namespace std;

int main()
{
	int num;
     num =0;
    
    // display welcome messages to user
    cout << "Welcome - This program calculates the squares and cubes\n";
    cout << "of the integers from 0 to 10 and prints using tabs\n\n";
    
cout << "\nnumber\tsquare\tcube\n"
	<< num << '\t' << num * num << '\t' << num * num * num << "\n";
	
	num = num + 1;
	cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
	
	num = num + 1;
	cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
	
	num = num + 1;
	cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
	
	num = num + 1;
	cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
	
	num = num + 1;
	cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
	
	num = num + 1;
	cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
	
	num = num + 1;
	cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
	
	num = num + 1;
	cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
	
	num = num + 1;
	cout << num << '\t' << num * num << '\t' << num * num * num << "\n";
	
	num = num + 1;
	cout << num << '\t' << num * num << '\t' << num * num * num << endl;
	
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return 0;
}
