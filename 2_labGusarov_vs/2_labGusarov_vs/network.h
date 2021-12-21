#pragma once
#include <unordered_map>
#include "Pipe.h"
#include "Station.h"
#include <iostream>
#include <fstream>
#include "adfunctions.h"
#include <typeinfo>

using namespace std;

class Network {
public:
	unordered_map<int, Pipe> pipesMap;
	unordered_map<int, Station> stationsMap;

	template <typename classType>
	void outputMap(unordered_map<int, classType>& map);

	void output();