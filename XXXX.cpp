#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h >
#include <chrono>
#include <ctime>

#include "Main_source.h"

using namespace std;

//Basic function to chose option
void option1()
{
	XXXX x_yes;
	x_yes.upload_text();
	x_yes.prepare_text_to_change();
	x_yes.first_change();
	x_yes.show();

}
void option2()
{
	XXXX x_no;
	x_no.upload_text();

}
void option3()
{
	exit(0);

}

//Function need to preapre option
short chose_option(char option)
{
	if (option == '1')
	{
		return 1;
	}
	else if (option == '2')
	{
		return 2;
	}
	else if (option == '3')
	{
		return 3;
	}
	else
	{
		return 0;
	}
}

//Main function with main loop 
int main()
{

	while (1)
	{
		char option;
		cout << "Option:\n1-Enxrypt text\n2-Secrypt the text\n3-Close window\n\n";
		cout << "Chose option for you: ";
		cin >> option;

		switch (chose_option(option))
		{
		case 1:
			option1();
			break;

		case 2:
			option2();
			break;

		case 3:
			option3();
			break;

		default:
			cout << "You have to put correct number!\n";
			break;
		}
	}


	return 0;
}

