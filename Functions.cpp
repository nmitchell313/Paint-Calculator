#include "Functions.h"

void WriteHeader()
{
    cout << "------------------------Program Header----------------------------" << endl;
    cout << "Programmer is: Nicholas Mitchell" << endl;
    cout << "This program is P5, The Paint Calculator" << endl;
    cout << "This program will determine how much paint is needed to paint \n";
    cout << "your room." << endl;
    cout << "------------------------------------------------------------------" << endl;
}

void AskForNameAndShape(string& rName, int& rShape)
{
    
    cout << "What is your name: ";
    getline(cin, rName);

    cout << "What is the shape of your room?\n";
    for (int i = 0; i < shapes.size(); i++) {
        cout << i + 1 << ". " << shapes[i] << endl;
    }
    cout << "==> ";
    cin >> rShape;
    cin.ignore();
}

void GoodBye()
{
	cout << " \nGoodbye, thanks for using my C++ Paint Calculator!";
}

bool DoAgain()
{
    char answer;

    cout << "Do you want to calculate the paint for another room?(y/n): " << endl;
    cin >> answer;
    cin.ignore();

    if (!(answer == 'Y' || answer == 'y' || answer == 'n')) {
        cout << "That was an invalid input, please answer y or n: " << endl;
        cin >> answer;
        cin.ignore();
    }
    if (answer == 'n') {
        return false;
    }
    if (answer == 'y' || answer == 'Y') {
        return true;
    }
}

void AskForDimensions(double *pLength, double* pWidth, double* pHeight, int* pPercentNoPaint, string *pDimens)
{
    double area{ 0. };
    double totalArea{ 0.0 };
    stringstream surfaceArea;
    //Enter the length, width, and height of your room in feet
    if (*pDimens == "rectangle") {
        cout << "Enter the length, width, and height of your room in feet\n";
        cin.ignore();
        cout << "Length(ex: 12.3): " << endl;
        cin >> *pLength;
        cin.ignore();
        cout << "Width: " << endl;
        cin >> *pWidth;
        cin.ignore();
        cout << "Height: " << endl;
        cin >> *pHeight;
        cin.ignore();
        area = (*pWidth) * (*pHeight);
    }
    else if (*pDimens == "round") {
        cout << "Enter the height of your room in feet(10.0)\n";
        cin.ignore();
        cout << "Height: " << endl;
        cin >> *pHeight;
        area = 6 * pow(*pHeight, 2);
    }
    

    // room dimensions as a string
    surfaceArea << "The dimensions of your room are " << *pWidth << " X " << *pHeight
        << ". With a total area of"
}

void AskForDimensions(double *pRadius, double *pHeight, int *pPercentNoPaint, string *pDimens)
{
    // Enter the Radius and height of your room
    cout << "Enter the radius and height of your room in feet" << endl;
    cout << "Radius: ";
    cin >> *pRadius;
    cin.ignore();
    cout << "Height: ";
    cin >> *pHeight;
    cin.ignore();
    
    //Please enter the percentage of wall space which is made of the doors and windws and will not be painted 
    
    stringstream circle;
   
}

void AskForPaintInfo(int& rcoats, int& rcoverage, string& rceiling)
{
    // Enter how many coats of paint you want 
    cout << "How many coats of paint would you like?: ";
    cin >> coats;
    // Coverage of your pain
    
    // Ask user if they want to paint Ceiling y or n
    cout << "Would you like the ceiling to be painted?(y/n): ";
    cin >> ceiling;
    if (!(ceiling == "Y" || ceiling == "y" || ceiling == "n" || ceiling == "N")) {
        cout << "Invalid input." << endl;
        cout << "Would you like the ceiling to be painted?(yes/no): ";
        cin >> ceiling;
    }
    else if (ceiling == "y" || ceiling == "Y") {
        // increase amount of coats and coverage
    }
    else if (ceiling == "n" || ceiling == "N") {
        // no calculations needed
    }
    cin.ignore();
}

int HowManyGallons(double length, double width, double height, int coverage, int coats, string ceiling, int percentNoPaint)
{
    double roomArea;




    return 0;
}

int HowManyGallons(double radius, double height, int coverage, int coats, string ceiling, int percentNoPaint)
{
    return 0;
}







