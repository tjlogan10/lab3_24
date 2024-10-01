/*
 Travis Logan
 C++ Fall 2024
 Due: Oct. 1 2024
 Lab 3: User and File I/O
 Lab description: This lab is used to get familiar with using input and output files to calculate the mean and standard deviation of a set of four integers. At the same time, there must also be another mean and standard deviation calculation for a set of four integers that are input by a user. Prompts are given where to input these integers and the results are provided.
 */
#include <iostream>
#include <string>
#include <iomanip>
#include "StatsCalc.h"
#include <fstream> // Added for file I/O
using namespace std;

int main()
{

    std::ifstream inFile;                // Declare an input file stream (similar to cin)
    inFile.open("/Users/tjlogan/Desktop/Lab3_24/Lab3_24/inMeanStd.dat.txt");        // Open file for reading called input.dat
    int number1, number2, number3, number4;
    inFile >> number1 >> number2 >> number3 >> number4;    //Read from the file
    inFile.close();                     // Close the file
    
    StatsCalc statsCalc;
    float mean = statsCalc.mean(number1, number2, number3, number4);
   
    StatsCalc StatsCalc;
    float standarddeviation = statsCalc.standarddeviation(number1, number2, number3, number4);
    
    // file I/O
    std::ofstream outFile;               // Declare an output file stream(similar to cout)
    outFile.open("/Users/tjlogan/Desktop/Lab3_24/Lab3_24/outMeanStd.dat.txt");          // Open file for writing called output.dat
    outFile << "The mean of the number is: " << mean << std::endl; // Write to the file
    outFile << "The standard deviation of the number is: " << standarddeviation << std::endl; // Write to the file
    outFile.close();
    

    int value1, value2, value3, value4;
        
    // Prompting the user to enter the values
        cout << "Enter value 1: ";
    cin >> value1;
    cout << "You Entered: " << value1 << endl;
        cout << "Enter value 2: ";
    cin >> value2;
    cout << "You Entered: " << value2 << endl;
        cout << "Enter value 3: ";
    cin >> value3;
    cout << "You Entered: " << value3 << endl;
        cout << "Enter value 4: ";
    cin >> value4;
    cout << "You Entered: " << value4 << endl;
    float average = statsCalc.average(value1, value2, value3, value4);
    float rmsd = statsCalc.rmsd(value1, value2, value3, value4);
        
    // Displaying the result
        cout << "The mean of the entered values is: " << average << endl;
    cout << "The standard deviation of the entered values is: " << rmsd << endl;
        return 0;
}
