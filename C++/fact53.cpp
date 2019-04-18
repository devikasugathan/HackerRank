# include<bits/stdc++.h>
using namespace std;
int main() 
{    
    int t;
    cin>>t;
    int n;
    
    for(int i=0;i<t;i++)
    {
        long long int f=1;
        cin>>n;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<f<<endl;
    }
   return 0;
} 
