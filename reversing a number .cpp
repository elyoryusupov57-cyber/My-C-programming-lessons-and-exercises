#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int y, x=0, z;
	cout << "Input y:";
	cin >> y;
	
	while(y!=0)
	{
		z=y % 10;
		x= x * 10 + z;
		y/=10;
	}
	cout << "Reversed Number:" << x << endl;
	
	return 0;
}
