#include <iostream>
#include <string>
#include "FolderHeader.h"
#include "FileHeader.h"
#include <cstdlib>

using namespace std;

void main()
{
	//adding a main folder
	Folder main("main");
	bool run = true;
	
	
	string name = "";
	string rename = "";

	//while loop for the menu system
	while (run)
	{
		int menu_input = 0;
		system("CLS");
		cout << "Welcome :)\n\n"
			<< "[1]Create new folder or file\n"
			<< "[2]Change name of a folder or file\n"
			<< "[3]Print information of a folder\n"
			<< "[4]Print information of the largest file\n"
			<< "[5]Exit\n\n"
			<< "What would you like to do?\n\n";
		cin >> menu_input;
		
		
		//Option 1 Creating a folder or a file
		if (menu_input == 1)
		{
			cout << "Create a new folder or file\n\n"
				<< "[1]New folder\n"
				<< "[2]New file\n";
			cin >> menu_input;
			//Adding folder
			if (menu_input == 1)
			{
				cout << "What would you like to name this file?\n";
				cin >> name;
				main.AddFolder(name);
			}
			//adding file
			else if (menu_input == 2)
			{
				cout << "What would you like to name this file?\n";
				cin >> name;
				main.AddFile (name);
			}
			else
			{
				run = true;
			}
		}
		//Option 2 Renaming folders or files
		else if (menu_input == 2)
		{
			cout << "Change name of a folder or file\n\n"
				<< "[1]Rename folder\n"
				<< "[2]Rename file\n";
			cin >> menu_input;
			//renaming folder
			if (menu_input == 1)
			{
				main.ChangeName();
			}
			//Renaming file
			else if (menu_input == 2)
			{
			
			}
			else
			{
				run = true;
			}
		}
		//Option 3 Printing info
		else if (menu_input == 3)
		{
				main.PrintInfo();
		}
		//Option 4 printing the largest file
		else if (menu_input == 4)
		{
			main.PrintLargestFile();
		}
		//Exit program
		else if (menu_input == 5)
		{
			run = false;
		}
		//Error catcher
		else
		{
			cout << "Invalid input, try again :)\n\n\n";
			run = true;
		}
		//options for after the submenu operations
		cout << "\n\nWould you like to go back or exit?\n"
			<< "[1]Go back\n"
			<< "[2]Exit\n";
		cin >> menu_input; //For some dumb reason this gets ignored if you type anything other than an int at the submenus. i couldnt't find a reason why

		if (menu_input==1)
		{
			run = true;
		}
		else if (menu_input == 2)
		{
			run = false;
		}
		else
		{
			cout << "Error";
			run = false;
		}
	}

}