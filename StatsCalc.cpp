#include "StatsCalc.h"
#include "cmath"

float meanD = 4.0f;

float StatsCalc::mean(int x1, int x2, int x3, int x4)
{
    float calcmean = (x1 + x2 + x3 + x4)/meanD;
    return calcmean;
}

float StatsCalc::standarddeviation(int x1, int x2, int x3, int x4)
{
    float calcmean = mean(x1, x2, x3, x4); //calculate the mean of input file
    
    return sqrt(((pow(x1 - calcmean,2)) + (pow(x2 - calcmean,2)) + (pow(x3 - calcmean,2)) + (pow(x4 - calcmean,2)))/meanD); //calculate standard deviation of input file
}
// Variables to store input values
float StatsCalc::average( int value1, int value2, int value3, int value4)
{
    float average = (value1 + value2 + value3 + value4) / meanD;
    return average;
}
float StatsCalc::rmsd(int value1, int value2, int value3, int value4)
{
   
    float calcmean = mean(value1, value2, value3, value4);  //calculate the mean of entered values
    
    return sqrt(((pow(value1 - calcmean,2)) + (pow(value2 - calcmean,2)) + (pow(value3 - calcmean,2)) + (pow(value4 - calcmean,2)))/meanD);  //calculate standard deviation of entered values
}
