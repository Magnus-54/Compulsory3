#pragma once
#include<iostream>
#include <string>
#include <vector>
#include "FileHeader.h"

using namespace std;


//Folder class
class Folder
{

/// <Folder members>
/// Name
/// Date
/// File array of 10
/// Folder pointers
/// </summary>

private:
	string name;
	string date;
	File files[10]; //file array
	Folder *folders; //folder array

	int amount_folders;
	int amount_files;

/// <Functions within the classes and constructors>
/// Change name
/// Print info
/// Add file 
/// Add folder
/// get name and get size 
/// Find and print largest file
/// </summary>

public:

	//Folder constructors
	Folder() 
	{
		name = "";
		date = "";
		amount_files = 0;
		amount_folders = 0;
		folders = nullptr;
	}
	Folder(string newName)
	{
		name = newName;
		date = "Today"; //temporary
		amount_files = 0;
		amount_folders = 0;
		folders = new Folder[5];
	}

	//Function for changing name
	void ChangeName()
	{
		string rename = "";
		PrintInfo();
		cout << "Type the name of the Folder you would like to rename\n";
		cin >> rename;
	};

	//Function for printing info and files inside
	void PrintInfo()
	{
		//cout number of files and their contents by name
		cout << "\nName: " << name;
		cout << "\nDate: " << date << "\n";

		// print folders in folder
		for (int i = 0; i < amount_folders; i++)
		{
			cout << "Folder Name: " << folders[i].getName() << "\n";
			cout << "Size: " << folders[i].getSize() << "\n\n";
			cout << "Today\n";//temporary
		}

		// print files in folder
		for (int i = 0; i<amount_files; i++)
		{
			cout << "File Name: "<<files[i].getName() << "\n";
			cout << "Size: "<<files[i].getSize()<< "\n\n";
			cout << "Today\n";//temporary
		}
	};

	//Function for adding files
	void AddFile(string name)
	{
		if (amount_files < 10)
		{
			files[amount_files] = File(name);
			amount_files++;
		}
		else 
		{
			cout << "Too many files in" << name << "\n";
		}
	}

	//Function for adding folders
	void AddFolder(string name)
	{
		if (amount_folders < 5)
		{
			folders[amount_folders] = Folder(name);
			amount_folders++;
		}
		else
		{
			cout << "Too many folders inside" << name << "\n";
		}
	}
	//Function for getting name
	string getName()
	{
		return name;
	}
	//Function for finding size of files
	int getSize()
	{
		int size = 0;
		for (int i = 0; i < amount_files; i++)
		{
			size+=files[i].getSize();
		}
		return size;
	}
	//Function for finding and printing largest file
	void PrintLargestFile()
	{
		int size = -1;
		int index = 0;

		for (int i = 0; i < amount_files; i++)
		{
			if (files[i].getSize() > size)
			{
				size = files[i].getSize();
				index = i;
			}
		}
		files[index].PrintInfo();
	}
};

