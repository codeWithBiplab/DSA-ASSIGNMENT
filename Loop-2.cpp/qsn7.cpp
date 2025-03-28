#include<iostream>
using namespace std;
int fact(int i)
{
    int pro =1;

    for(int x=1;x<=i;x++)
    {
        pro*=x;


    }
    return pro;

}
int main ()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<fact(i)<<endl;

    }
    
}