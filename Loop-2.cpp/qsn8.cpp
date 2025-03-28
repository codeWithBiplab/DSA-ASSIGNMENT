#include <iostream>
using namespace std;
int count (int n)
{
    int count = 1;
    for(int i=1;i<=n;i++)
    {
        count*=10;

    }
    return count;
}
int main ()
{
    int n;
    cin>>n;
    int m =0;
    int sum =0;
    while(m<count(n))
    {
        m+=2;
        sum+=m;
        m*=10;
    }
    cout<<sum;
}