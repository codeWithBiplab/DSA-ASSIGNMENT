#include<iostream>
using namespace std;
int main ()
{
    int n;
    int rem =  0;
    int sum =0;
    cin>>n;
    while(n>0)
    {
        rem =n%10;
        n/=10;
        if(rem%2==0)
        {
            sum +=rem;

        }
        
    }
    cout<<sum;

}