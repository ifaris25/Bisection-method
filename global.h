#include<iostream>
#include<math.h>
#include <iomanip>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;
#define f(x)( pow(x,3)-0.165 * pow(x,2) + 3.993 * pow(10,-4))
double XU=0.11;
double XL=0;
double newMidPoint=NAN;
double oldMidPoint;
int numberOfIteration=20;
int numberOfDigit=10;
ofstream myFile;
void displayAttributes();
double calculateXm(double xl , double xu);
double findError(double New , double Old);
void bisectionMethod();
double howManyDigitCorrect(double error);
