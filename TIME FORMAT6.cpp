#include <iostream>
#include <cstring>
#include <cctype> //i found this function isdigit in this library
#include <cstdlib> // i really  want to use "stoi" to change string to integer but since it is older compiler it did not read it so i found atoi from library <cstdlib> and use it.
using namespace std;

bool isdigit(string x); // i declared a global function so later i could recall it

int main()
{
	cout << "************ TIME FORMAT ****************\n"; 
	string time;
	cout << "Input time in this given format hh:mm:ss: ";  // input for time and its format
	cin >> time;
	
	if(time.length()==8 && time[2] == ':' && time[5] == ':') // I put two of the (:) where it needs to be just like in the format and conditions
	{
		cout << "Correct format: " << endl;
		cout << "************ GREAT JOB!!! ****************\n";
	}
	else
	{
		cout << "Incorrect format!!! Please enter only (:) in between: " << endl;
		cout << "************ YOU MESSED UP!!! ****************\n";
	}
	
	string hours = time.substr(0, 2); // this is where hours need to be 
	string minutes = time.substr(3, 2); // this is where minutes need to be 
	string seconds = time.substr(6, 2); // this is where seconds need to be 
	 
	if(isdigit(hours) || isdigit(minutes) || isdigit(seconds)) // i recalled a isdidgit function i previously declared with  if else condition
	{
		cout << "Correct Format: " << endl;
		cout << "************ EXCELLENT WORK!!! ****************\n";
	}
	else
	{
		cout << "Incorrect format!! Please Enter only two digits at a time: " << endl;
		cout << "************ OMG YOU MESSED UP AGAIN!!! ****************\n";
	}
	
	int hh = atoi(hours.c_str());  // i tried to use stoi but it did not work out so i found atoi from another library
	int mm = atoi(minutes.c_str()); // string to int
	int ss = atoi(seconds.c_str()); // string to int
	
	if(hh>=0 && hh<24 && mm>=0 && mm<60 && ss>=0 && ss<60)// i specified the range for every unit  min number and max number  and do it with if else condition so it will tell me where is the mistake is?
	{
		cout << "Correct time: " << time << endl;
		cout << "************ BRILLIANT YOU DID IT!!! ****************\n";
	}
	else
	{
		cout << "You entered the incorrect time: " << time << endl;
		cout << "************ OMG DUDE!!! ****************\n";
	}
	
	system("pause");
	return 0;
}

bool isdigit(string x)  // used a bool to declare and check case
{
	for(int i=0; i < x.length(); i++) // loop for length of the programm
	{
		if(isdigit(x[i]))
		{
			return true;
		}
	}
	return false;
}
