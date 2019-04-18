# include<bits/stdc++.h>
using namespace std;
int main() 
{    
    int t;
    cin>>t;
    int m,n;
    for(int i=0;i<t;i++)
    {
        cin>>m>>n;
        int temp=m;
        m=n;
        n=temp;
        cout<<m<<" "<<n<<endl;
    }
    
   return 0;
} 
