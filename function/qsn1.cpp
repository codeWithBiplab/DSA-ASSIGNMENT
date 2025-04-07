#include<iostream>
using namespace std;
int sqrt(int n)
{
    int ans = 0;
    
    for(int i =1; i<=n;i++)
    {
        ans=i*i;
        
        cout<<i*i<<endl;

    }
    return ans ;
}
int main ()
{
    int n;
    cout<<"Enter The Number\n";
    cin>>n;
    sqrt(n);


}