#pragma once
#include "network.h"

using namespace std;

int Pipe::id = 0;
int Station::id = 0;

int main()
{
    Network net;

    while (true) {
        printMenu();
        switch (choose(11)) {
        case 0:
            cout << "\nExit\n";
            return 0;
        case 1:
            net.pipesMap.insert();
            break;
        case 2:
            net.stationsMap.insert();
            break;
        case 3:
            net.output();
            break;
        case 4:
            net.editing();
            break;
        case 5:
            net.editing();
            break;
        case 6:
            net.deleting();
            break;
        case 7:
            net.deleting();
            break;
        case 8:
            net.filtration();
            break;
        case 9:
            net.filtration();
            break;
        case 10:
            net.save();
            break;
        case 11:
            net.load();
            break;
        default:
            break;
        }
    }
    return 0;
}