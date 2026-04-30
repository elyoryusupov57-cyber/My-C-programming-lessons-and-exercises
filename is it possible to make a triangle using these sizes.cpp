#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a+b>c && a+c>b && c+b>a)
		cout << " It is possible"<< endl;
	else
		cout << "It is impossible to form a triangle using those sizes!!!!" << endl;
	
	system("pause");
	return 0;	
}
