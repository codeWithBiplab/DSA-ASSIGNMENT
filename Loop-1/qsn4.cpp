#include<iostream>
using namespace std;
int main ()
{
    int a =3;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cout<<a<<"\n";
       a*=4;
    }
}