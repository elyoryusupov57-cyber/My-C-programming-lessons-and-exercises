#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	const int N=5, M=6;
	double a[N][M]; // formed an array
	srand(time(0)); //generating numbers by time
	
	for(int i=0; i<N; i++) 
		for(int j=0; j<M; j++) //for loop for generating numbers according to column and rows
				a[i][j] = rand()%90+10; // 10-99;
	
	cout << "**********This is the original array:*************" << endl;			
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<M; j++)
				cout << a[i][j] << " ";
		cout << endl;
	
	}
	
	cout << "**********This is the 90* rotated array:**********" << endl;
		for(int j=0; j<M; j++)
			{
				for(int i=N-1; i>=0; i--)// i start from the last row , go backward and print the numbers till the first row
						cout << a[i][j] << " ";
					cout << endl;
			}
	system("pause");
	return 0;
}
