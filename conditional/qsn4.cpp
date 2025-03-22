#include<iostream>
using namespace std;
int main ()
{
    int l,b;
    cin>>l>>b;
    int A = l*b;
    int cir = 2*(l+b);
    if (A>cir)
    {
        cout<<"area is greater";
    }
    else {
        cout<<"circumfearence is greater";
    }
}
