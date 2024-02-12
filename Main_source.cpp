#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <math.h>
#include <vector>
#include <chrono>
#include <ctime>
#include <algorithm>

#include "Main_source.h"

using namespace std;


bool check_number(long int number);
short day(const tm* time_info);
short month(const tm* time_info);
short year(const tm* time_info);

//Constructor
XXXX::XXXX()
{
	long int number_after_check = 0;
	bool check = false;

	for (int i = 3; XXXX::numbers.size()< 1000; i++)
	{
		check = check_number(i);


		if (check == true)
		{
			number_after_check = i;
			XXXX::numbers.push_back(number_after_check);
		}
	}
	
}

//Destroyer
XXXX::~XXXX()
{

}

//Method to retrieve text from the user 
void XXXX::upload_text()
{
	string text_to_upload;
	char help;


	cout << "\n\nYor text to change: ";
	cin.clear();
	cin.ignore();
	getline(std::cin, text_to_upload);

	for (char c : text_to_upload) {
		XXXX::text.push_back(c);
	}
}

//Method prepare text to change. Make two times one char and change space to other char
void XXXX::prepare_text_to_change()
{
	
	for (int i = 0; i < XXXX::text.size(); i++)
	{
		if (XXXX::text[i] == 32)
		{
			short number1 = 'f';
			short number2 = 'k';

			XXXX::text_during_work.push_back(number1);
			XXXX::text_during_work.push_back(number2);
		}
		else if (i == 3 || i == 8 || i == 10)
		{
			short number1 = 'f';
			short number2 = 'k';

			XXXX::text_during_work.push_back(number1);
			XXXX::text_during_work.push_back(number2);

			if (i == 3)
			{
				XXXX::text_during_work.push_back(day(XXXX::time_info));
				XXXX::text_during_work.push_back(day(XXXX::time_info));

				XXXX::text_during_work.push_back(number1);
				XXXX::text_during_work.push_back(number2);

				XXXX::text_during_work.push_back(XXXX::text[i]);
				XXXX::text_during_work.push_back(XXXX::text[i]);
			}
			else if (i == 8)
			{
				XXXX::text_during_work.push_back(month(XXXX::time_info));
				XXXX::text_during_work.push_back(month(XXXX::time_info));

				XXXX::text_during_work.push_back(number1);
				XXXX::text_during_work.push_back(number2);

				XXXX::text_during_work.push_back(XXXX::text[i]);
				XXXX::text_during_work.push_back(XXXX::text[i]);
			}
			else if (i == 10)
			{
				XXXX::text_during_work.push_back(year(XXXX::time_info));
				XXXX::text_during_work.push_back(year(XXXX::time_info));

				XXXX::text_during_work.push_back(number1);
				XXXX::text_during_work.push_back(number2);

				XXXX::text_during_work.push_back(XXXX::text[i]);
				XXXX::text_during_work.push_back(XXXX::text[i]);
			}
		
			
		}
		else
		{
			XXXX::text_during_work.push_back(XXXX::text[i]);
			XXXX::text_during_work.push_back(XXXX::text[i]);
		}
	}
}

//Method with first mathematical operation 
void XXXX::first_change()
{
	short number_from_year = ((XXXX::text_during_work[9] * XXXX::text_during_work[24] * XXXX::text_during_work[34]) % 7)+1;


	for (int i = 0; i < XXXX::text_during_work.size(); i++)
	{
		if (i != 9 && i != 8 && i != 24 && i != 25 && i != 34 != 35)
		{
			XXXX::ready_text.push_back(XXXX::text_during_work[i] * XXXX::numbers[i] * number_from_year);
		}
		else
		{
			XXXX::ready_text.push_back(XXXX::text_during_work[i]);
		}
	}
	
	long int max = *max_element(XXXX::ready_text.begin(), XXXX::ready_text.end());

	string lenght_str = to_string(max);
	int lenght = lenght_str.length();
	
	for (int i = 0; i < XXXX::ready_text.size(); i++)
	{
		string lenght_str1 = to_string(XXXX::ready_text[i]);
		int lenght1 = lenght_str1.length();
		if (lenght != lenght1)
		{
			do
			{
				XXXX::ready_text[i] = XXXX::ready_text[i] * 10;
				lenght_str1 = to_string(XXXX::ready_text[i]);
				lenght1 = lenght_str1.length();
			} while (lenght != lenght1);
		}
	}
}

//Method with code for show your cipher text
void XXXX::show()
{ 
	cout << "Your message is: \n";
	for (int i = 0; i < XXXX::ready_text.size(); i++)
	{
		cout << XXXX::ready_text[i];
	}
	cout << "\n";
}


//These functions are used by methods in the class
bool check_number(long int number)
{
	bool check = true;

	if (number <= 1)
	{
		check = false;
	}
	for (int i = 2; i * i <= number; ++i) {
		if (number % i == 0)
		{
			check = false;
		}
	}

	return check;
}

//Preparing day number
short day(const tm* time_info)
{
	short day = 0;
	
	day = time_info->tm_mday;

	return day;
}

//Preparing month number
short month(const tm* time_info)
{
	short month = 0;
	
	month = time_info->tm_mon + 1;

	return month;
}

//Preparing year number
short year(const tm* time_info)
{
	short year = 0;

	year = time_info->tm_year - 100;

	return year;
}