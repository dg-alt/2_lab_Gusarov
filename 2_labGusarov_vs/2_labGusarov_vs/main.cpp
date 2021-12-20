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
        
        }
    }
    return 0;
}