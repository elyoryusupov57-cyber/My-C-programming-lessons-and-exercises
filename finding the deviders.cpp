#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int c;
	cout << "Input c:";
	cin >> c;
	
	int i=1;
	for(int i=1; i<=c; i++)
		if(c%i==0)
			cout << i << endl;

	

 return 0;
}
