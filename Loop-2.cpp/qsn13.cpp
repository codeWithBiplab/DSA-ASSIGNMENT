#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int sum =0;
    int i=1;
   while(i<=n && sum<300)
    {
        
        
        if (i%5!=0  )
        {
            sum+=i;
            // if (sum>300)
            // {
                
            //     break;

            // }
            
            

        }
        sum+=0;
        i++;
        // if (sum>300)
        //     {
                // cout<<sum<<endl;
                
            //     break;
                

            // } 
        
        
    }
    cout<<sum;
}