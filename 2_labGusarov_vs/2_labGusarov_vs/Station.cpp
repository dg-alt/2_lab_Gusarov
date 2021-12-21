#pragma once
#include <iostream>
#include "Station.h"
#include "adfunctions.h"


using namespace std;

Station::Station()
{

    id++;

    cout << "Adding Station\n";

    cout << "Input name:\n";
    cin >> name;

    cout << "Input number of workshops:\n";
    numberOfWorkshops = 0;
    while (numberOfWorkshops <= 0) {
        numberOfWorkshops = inputInteger();
    }

    cout << "Input number of working workshops:\n";
    numberOfWorkingWorkshops = -1;
    while (numberOfWorkingWorkshops < 0 || numberOfWorkingWorkshops > numberOfWorkshops) {
        numberOfWorkingWorkshops = inputInteger();
        if (numberOfWorkingWorkshops > numberOfWorkshops) {
            cout << "Wrong input\n";
            cout << "Try again:\n";
        }
    }

    cout << "Input Efficiency (0 < e <= 100):\n";
    efficiency = 0;
    while (efficiency <= 0 || efficiency > 100) {
        efficiency = inputInteger();
        if (efficiency <= 0 || efficiency > 100) {
            cout << "Wrong input\n";
            cout << "Try again:\n";
        };
    }
}