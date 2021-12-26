#include <iostream>
#include "Pipe.h"
#include "adfunctions.h"


using namespace std;

Pipe::Pipe()
{
    id++;
    cout << "Adding Pipe\n";
    cout << "Input name:\n";

    cin >> name;

    cout << "Input diameter:\n";
    diameter = 0;
    while (diameter <= 0) {
        diameter = inputInteger();
    }

    cout << "Input length:\n";
    length = 0;
    while (length <= 0) {
        length = inputDouble();
    }

    isWorking = true;
}

Pipe::Pipe(string name, int diameter, double length, bool isWorking)
{
    id++;
    this->name = name;
    this->diameter = diameter;
    this->length = length;
    this->isWorking = isWorking;
}

Pipe::~Pipe()
{
}

void Pipe::edit() {
    isWorking = !isWorking;

}

void Pipe::output() {
    cout << "\nPipe:";
    cout << "\nName: " << name;
    cout << "\nDiameter: " << diameter;
    cout << "\nLength: " << length;
    cout << "\nIs working?: " << isWorking << "\n";
}