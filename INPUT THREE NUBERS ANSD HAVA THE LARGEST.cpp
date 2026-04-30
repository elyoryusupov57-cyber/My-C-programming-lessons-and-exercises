#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Input a,b,c:" << endl;
	cin >> a >> b >> c;
	if(a>=b && a>=c)
	{
		cout << "Largest" << a << endl;
	}
	else if(b>=a && b>=c)
	{
		cout << "Latgest:" << b << endl;
	}
	else
	{
		cout << "Largest:" << c << endl;
	}
	
		system("pause");
		return 0;
}
