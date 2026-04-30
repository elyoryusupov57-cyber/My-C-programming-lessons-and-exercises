#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double pi = 3.1415;

	double a;
	cout << "Input a:";
	cin >> a;
	double circumference = 2 * pi * a;
	
	cout << circumference << " sm " << '\n';
	
	return 0;
}
