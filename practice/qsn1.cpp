#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Row Number\n ";
    cin >> m;
    cout << "Enter Column No\n ";
    cin >> n;
    int k = 1;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // JO PRIINT KRNA HOGA WO IHA PAR DENA
        for (int j = 1; j <i; j++)
        {
            cout << j;
            
        }
        for ( int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout << endl;
    }
    
}