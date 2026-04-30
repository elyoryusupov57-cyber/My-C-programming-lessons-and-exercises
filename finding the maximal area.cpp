#include <iostream>
using namespace std;

const int column=6;
const int row=9;

int arr[column][row]= {
	{1, 1, 0, 0, 0, 0, 0, 0, 0}, 
	{1, 0, 0, 1, 1, 1, 1, 0, 0},
	{0, 0, 1, 1, 1, 1, 1, 1, 0}, // i entered the matrix with numbers
	{0, 0, 1, 1, 1, 0, 1, 1, 0},
	{0, 0, 0, 1, 1, 1, 1, 0, 0},
	{0, 1, 1, 0, 0, 0, 0, 0, 0},
};

int dfs(int i, int j)// i found this DFS() recursive on www.softwaretestinghelp.com 
{
	if( i<0 || i>=column ||j<0 || j>=row || arr[i][j]==0)// if all the cells are less then 0 ,equal to 0 or empty
		return 0;  // programm ends
	
	arr[i][j] = 0; // sees if ceel are visited and mark them
	 
	int area = 1;// starting from the colored cell and continues til it comes to the 0 which is not colored 
	
	area = area + dfs(i+1, j);  // moving down
	area = area + dfs(i-1, j);// moving up
	area = area + dfs(i, j+1);// moving right
	area = area + dfs(i, j-1);// moving left
	
	return area;
}

int main()
{
	int largest = 0;// declaring an intiger 
	
	cout << "**********Finding the largest area: ***********\n";
	for(int i=0; i<column; i++)
	{
		for(int j=0; j<row; j++)// arrays
		{
			if(arr[i][j] == 1)//see only this array's colored cells 
			{
				int area = dfs(i, j); // shows array's colored cells 
				if(area > largest) // this is always true so by this i linked the declared integer with area
					largest = area;
			}
		}
	}
	
	cout << "The largest area is :" << largest << endl;
	cout << "***********************************************  ";
	
	system("pause");
	return 0;
}
