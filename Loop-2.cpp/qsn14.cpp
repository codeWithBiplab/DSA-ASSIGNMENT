#include <iostream>
using namespace std;
int lastdigit (int n)
{
    int ld=0;
    int fd=0;
    int sum =0;
    ld = n%10;
        fd = cube(ld);
        sum+=fd;
        n/10;
        return sum;


}
int cube(int n)
{
    return n*n*n;
}
int main() 
{
    int n;
    cin>>n;
    int ld=0;
    int fd=0;
    int sum =0;
   int i=1;
   while(i<n)
      {  
        
        
        if (lastdigit(i)==n)
    {
        cout<<lastdigit(i);
    }



    }
    
    
}