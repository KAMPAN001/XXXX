#pragma once
#include <vector>
#include <string>
#include <math.h>
#include <chrono>
#include <ctime>

using namespace std;


//Dectlaration for main class with function and variable for program 
class XXXX
{
public:
	XXXX();
	~XXXX();
	void upload_text();
	void prepare_text_to_change();
	void first_change();
	void show();

private:
	vector<long int> numbers;
	vector<char> text;
	vector<long int> text_during_work;
	vector<long int> ready_text;

	chrono::time_point<chrono::system_clock> actual = std::chrono::system_clock::now();
	time_t time = chrono::system_clock::to_time_t(actual);
	tm* time_info = localtime(&time);
	

};


