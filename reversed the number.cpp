#include <iostream>
using namespace std;

int main()

{
	int x, lax, reversed = 0;
	cout << "Input x:";
	cin >> x;
	
	while(x>0)
	{
		lax = x % 10; // taking last digit of x to left
		reversed = reversed*10 + lax; /* by reversed*10 adding one more room to the right , making the last digit 0 and adding last digit of x on the left */;
		
	}
	if(reversed!=x) // if reversed is equal to original input
		{
		cout << "Palindrome:";
		}
	else
		{
		cout << "Not Palindrome:";
		} 
	
cout << "reversed of x:" << reversed << endl;
	
	system("pause");
	return 0;
}

