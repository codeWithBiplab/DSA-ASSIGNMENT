#include<iostream>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;
    if (x==0 && y==0)

    {
        cout<<"origin";
    }
    else if (x==0) {
        cout<<"y axis";
    }
    else {
        cout<<"x axis";
    }
}