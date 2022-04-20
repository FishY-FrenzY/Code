#pragma once
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int Ex = 1;
string name = "Kevin";
bool statement = true;
float x = 1.2;
double y = 1.8434;

void Save()
{
	ofstream File("Data.dat");
	File << "Data File goes in here\n"; // Text
	File << Ex << endl; // int
	File << name << endl; // string 
	File << statement << endl; // bool
	File << x << endl; // float
	File << y << endl; // double
	File.close();
}

string line;

void Load()
{
	ifstream File("Data.dat");
	getline(File, line);
	getline(File, line); // This is skipping the first 2 lines because you dont want that text
	getline(File, line);
	int z = stoi(line);
	Ex = z; // converting a string to an int
	getline(File, line);
	name = line; // this is just a string
	getline(File, line);
	statement = line; // bool
	getline(File, line);
	int f = stof(line);
	x = f; // float converting
	getline(File, line);
	int d = stod(line);
	y = d; // double converting
	File.close();
	// add more as needed 
}