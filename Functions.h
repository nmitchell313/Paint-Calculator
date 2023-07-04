// Function.h File
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <sstream>

using namespace std;

//initialize shapes in vector
vector<string> shapes = { "Rectangular", "Round", "Square" };

// Constant PI
const double PI{3.14159};

void WriteHeader();
void AskForNameAndShape(string& rname, int& rshape);
void GoodBye();
bool DoAgain();
int HowManyGallons(double length, double width, double height, int coverage, int coats, string ceiling, int percentNoPaint);
int HowManyGallons(double radius, double height, int coverage, int coats, string ceiling, int percentNoPaint);
void AskForDimensions(double* pLength, double* pWidth, double* pHeight, int* pPercentNoPaint, string *pDimens);
void AskForDimensions(double* pRadius, double* pHeight, int* pPercentNoPaint, string *pDimens);
void AskForPaintInfo(int& rcoats, int& rcoverage, string& rceiling);

#endif

