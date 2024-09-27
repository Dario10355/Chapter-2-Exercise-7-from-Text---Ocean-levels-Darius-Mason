// Chapter 2 Exercise 7 from Text - Ocean levels Darius Mason.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    // Constants
    const double risePerYear = 1.5; // Ocean level rise in mm per year

    // Calculating the rise for different years
    double riseIn5Years = risePerYear * 5;
    double riseIn7Years = risePerYear * 7;
    double riseIn10Years = risePerYear * 10;

    // Displaying the results
    cout << "Ocean level rise in 5 years: " << riseIn5Years << " mm" << endl;
    cout << "Ocean level rise in 7 years: " << riseIn7Years << " mm" << endl;
    cout << "Ocean level rise in 10 years: " << riseIn10Years << " mm" << endl;

    return 0;
}
