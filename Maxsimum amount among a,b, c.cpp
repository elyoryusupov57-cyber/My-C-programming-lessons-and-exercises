#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Input number a, b, c:";
	cin >> a >> b >> c;
	
	int minimum = min(a, min(b, c));
	cout << "the smallest is:" << minimum << endl;
	
	return 0;
}
