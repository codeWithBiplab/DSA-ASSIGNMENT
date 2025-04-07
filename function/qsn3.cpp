#include<iostream>
using namespace std;
int findOdd(int a, int b)
{
    int ans = 0;
    for(int i =a; i<b-1;i++)
    {
        if (i%2!=0)
        {
           cout<<i<<endl;

        }
         
    }
    
}
int main ()
{
    int a ,b;
    cin>>a>>b;
    cout<<findOdd(a,b);
}