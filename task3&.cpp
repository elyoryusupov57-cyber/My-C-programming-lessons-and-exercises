#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int lower=10, higher=100; // assigning the limits
	int attemps=0; // starts from zero attemps
	
	 while(attemps<10) // used loop so it starts again every time
	{	
		attemps++; // adds 0ne to attemps everytime  loop restarts
		int guess = (higher+lower) /2; // better start guessing  in tjhe middle 
		char response;
		cout << "Is your number: " << guess  << " enter '<' if lower, enter '>' if higher, enter '=' if true)"; // used char for giving instructions
		cin >> response; 
		if(response == '=')
		{
			cout << "Good job gotting in " << attemps << endl; //guessed right proccess stops
			return 0;
		}
		else if(response == '<') // used if else conditions checking  
		{
			higher = guess-1; // and setting new maxhigh and maxlow limits every time
		}
		else if(response == '>')
		{
			lower = guess+1;
		}
	}
	
	cout << "could not guess the number, you win!" << endl;
	
	system ("pause");
	return 0;
}
