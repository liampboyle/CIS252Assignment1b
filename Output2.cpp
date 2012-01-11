/* *********************************************************************
 * Liam Boyle
 * CIS 252-55Z1
 * Assignment 1 Output2.cpp
 * 11 Jan 2012
 * *********************************************************************
 */

 #include <iostream>
 #include <cstdlib> //included for general principle not needed
 using namespace std;

int main()
{
	// Main function variable declarations
	int creditHours;
	double gradePointAverage;

	// Main function code body

	// I/O sequence
	cout << "Please enter number of credit hours: ";
	cin >> creditHours;
	cout << endl;

	cout << "Please enter your grade point average: ";
	cin >> gradePointAverage;
	cout << endl;

	cout << "The number of credit hours is:  " << creditHours << endl;
	cout << "The grade point average is:  " << gradePointAverage
		<< endl;

	return 0;
}
