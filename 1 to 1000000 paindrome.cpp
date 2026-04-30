#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int c=1000000;
	int  a=0; // I add a short time integer to link for loop with the while loop
	
	for(int i=1 ; i<c ; i++) // number 1 to million
	{
		int rev=0; // when i declared rev as 0 before "For loop" result was 1 and loop only read it one time. I put it inside the loop so that it repeats itself every time with 0  
		a=i; // I add a short time integer to link for loop with the while loop
		do
		{
			int digit;
			digit = a % 10;
			rev= rev * 10 + digit;
			a /= 10;
		}
		while(a>0); // does it only if condition is true
	
		if(rev == i) // displayed all the palindromes 
		{
			cout << "Palindrome:" << i << endl;
		}
	}
	system("pause");
	return 0;	
}
