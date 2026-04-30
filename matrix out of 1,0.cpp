#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    const int N=7,M=5;
    int a[N][M];
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
                a[i][j] = rand()%2;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
                cout << a[i][j] << " ";
        cout << endl;
    }
system("pause");
return 0;
}



