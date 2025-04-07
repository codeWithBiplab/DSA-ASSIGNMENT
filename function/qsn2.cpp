#include<iostream>
using namespace std; 
int area (int n)
{
    return 3.14*n*n;
}
int main ()
{
    int r;
    cout<<"Enter The Value Of Radius\n";
    cin>>r;
    cout<<"Area Is :"<<area(r);

}