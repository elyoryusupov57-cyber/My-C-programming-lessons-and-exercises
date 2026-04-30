#include <iostream>
using namespace std;

 int fibo(int x)
{
	if(x<=2)
		return 1;
	else
	return fibo(x-1)+ fibo(x-2);
}
int main()
{
	cout << fibo(7) << endl;
	return 0;
}
