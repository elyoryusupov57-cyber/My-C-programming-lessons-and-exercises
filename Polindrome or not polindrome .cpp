#include <iostream>
using namespace std;

int main() // to this project i used concept of reversing numbers as a basis 

{
	int x, reversed = 0;
	cout << "Input x:";
	cin >> x;
	
	int c = x; // the while loop is not understanding the x so i put  another integer to it c
	while(c>0)
	{
		int lax = c % 10; // taking last digit of x to left
		reversed = reversed*10 + lax; /* by reversed*10 adding one more room to the right , making the last digit 0 and adding last digit of x on the left */
		c /=10;
	}
	if(reversed == x) // if reversed is equal to original input
	{
		cout << "Palindrome:" << reversed << endl;
	}
	else
	{
		cout << "Not Palindrome:" << x << endl; //if it is not 	
	}
	system("pause");
	return 0;
}
