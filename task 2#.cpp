#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int n, attemps=0;
	srand(time(0)); // put this becuase it will be different every execution
	int random = rand()%92+10; // learned from ramdom number class	
	do
	{	
		attemps++; // counter adds one when the loop restarts
		int n;
		cout << "Input n: "; // this is for guessing
		cin >> n;
			
		if (n < random)   // i put 3 condition guesser will not get lost
		{
			cout << "Number is greater than entered:" << endl;
		}
		if(n > random)
		{
			cout << "Number is less than entered: " << endl;
		}
		if (n==random)
		{
			cout << "Number is guessed on " << attemps << " attemps." << endl;
		}
	}
	while(attemps <10);
	
	cout << "You lose! Correct answer is " << random << endl; // this will be the final result if all the guess attemps are used up
	
	system ("pause");
	return 0;
}
