#include<iostream>
using namespace std;
int main ()
{
    int  n;
    int r =  0;
    int ld =0;
    
    
    cin>>n;
    int sum =n;
    while(n>0)
    {
        ld=n%10;
        r*=10;
        r+=ld;
        
        n/=10;

        
    }
    
    cout<<r;
    sum+=r;
    cout<<sum;

}