#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void print (string str)
{
    cout<<str<<endl;
}
int sum (int a,int b)
{
    return a+b;
}
void maxValue(int c, int d , int e)
{
    if(c>d && c>e)
    {
        cout<<c<<endl;

    }
    else if (d>c && d>e)
    {
        cout<<d<<endl;
    }
    else{
        cout<<e<<endl;
    }
}
int swap (int &a , int &b)
{
    int temp = a;
    a=b;
    b=temp;
    return a ,b;
}
int main ()
{
    // string str;
    // cin>>str;
    int a,b;
    cin>>a>>b;
    print("Biplab Goswami Here");
    cout<<sum(a,b)<<endl;
maxValue(3,7,4);
// int s = swap 12,13;
swap(a,b);
cout<<b;

}