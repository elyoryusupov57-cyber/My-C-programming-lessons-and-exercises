#include <iostream>
using namespace std;

void sqast(char c, int e)
{
	for(int i=0; i<e; i++)
		cout << c;
	cout << endl;

}
int main()
{

	sqast('*' ,4);
	sqast('*' ,4);
	sqast('*' ,4);
	sqast('*' ,4);
	
	return 0;
}

