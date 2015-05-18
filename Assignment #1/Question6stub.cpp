/*
 *  Question6.cpp
 *
 *  Name:           [ Benjamin Effiong Uwak ]
 *  Department:     [ Computer science ]
 *  Matric. No:     [ 45303159DG ]
 *
 *  Body Mass Index (BMI) calculator application that reads
 *  the user’s weight in kilograms and height in meters,
 *  calculates and display the user’s body mass index
 *
 *  Stub file to enable you complete assignment #1 - question #6
 */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
   	int weight = 0;
	int height = 0;
    
    // display welcome messages to user
    cout << "Welcome - This Body Mass Index (BMI) calculator application that reads\n";
    cout << "the user’s weight in kilograms and height in meters,\n";
    cout << "calculates and display the user’s body mass index\n\n";
    
    // TODO: display information from the Department of Health and Human Services
    // Put code here ...
    
    // TODO: read in values
    cout << "Enter weight (in kg): ";
    cin >> weight;
    
    cout << "Enter height (in meters): ";
    cin >> height;
    
    int bmi = (weight)/ (height * height);
	
	cout << "\nYour BMI is: " << bmi << "\n\n";
	
	cout << "BMI VALUES \n";
	cout << "Underweight: less than 18.5 \n";
	cout << "Normal: between 18.5 and 24.9\n";
	cout << "Overweight: between 25 and 29.9 \n";
	cout << "Obese: 30 or greater \n";
    
    cout << "\nThanks and Goodbye";
    
    //system("PAUSE");
    return 0;
}
