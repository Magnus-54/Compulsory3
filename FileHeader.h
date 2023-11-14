#pragma once
#include<iostream>
#include <string>
#include <vector>
#include "FolderHeader.h"

using namespace std;


//File class
class File
{
private:
	int size;
	string date;

public:
	string name;

//File constructors
File(string newName)
{
	size = GenSize();
	name = newName;
	date = "Today"; //temporary
}
File()
{
	size = GenSize();
	name = "";
	date = ""; //temporary
}
//Function for changing name
void ChangeName()
{

};
//Fucntion for printing info
void PrintInfo()
{
	cout << "\nName: " << name;
	cout << "\nSize: "<< size;
	cout << "\nDate: "<<date<<"\n";
};
//Function for generating random size
int GenSize()
{
	size=rand() % 100 + 1;

	return size;
};
//Function for name
string getName() 
{
	return name;
}
//Function for size
int getSize()
{
	return size;
}
};

