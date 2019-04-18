# include<bits/stdc++.h>
using namespace std;
int main() 
{    
    int t;
    cin>>t;
   
    
    for(int i=0;i<t;i++)
    { int n,r=0,d;
        
        cin>>n;
        while(n!=0)
        {
           r=r*10;
           d=n%10;
           r=r+d;
           n=n/10;
        }
    cout<<r<<endl;
    }
   return 0;
} 
