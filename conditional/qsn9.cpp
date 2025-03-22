#include<iostream>
using namespace std;
int main ()
{
    char ch;
    cin>>ch;
    int n = (int)ch;
    if (n>=65 && n<=90 || n>=97 && n<=122)
    {
        cout<<"alphabet";
    }
    else {
        cout<<"speacial character";
    }
}
