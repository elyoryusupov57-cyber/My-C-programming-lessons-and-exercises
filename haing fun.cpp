#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Input x:" << endl;
	cin >> x;
	
	int i=1;
	while(i<=x)
	{
		cout << i*i << " ";
		++i;
	}
	cout << endl;
}
