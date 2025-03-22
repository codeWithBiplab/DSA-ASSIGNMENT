#include<iostream>
using namespace std;
int main ()
{
    int r;
    cin>>r;
    int A = 3.14*r*r;
    int cir = 283.14*r;
    if (A>cir)
    {
        cout<<"area is greater";
    }
    else {
        cout<<"circumfearence is greater";
    }
}
