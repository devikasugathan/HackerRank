# include<bits/stdc++.h>
using namespace std;
int main() 
{    
    int t,u=0,v;
    cin>>t;
   
    
    for(int i=0;i<t;i++)
    { 
        string s;
        cin>>s;
        int l= s.length()-1;
        v=l+1;
        int r=0,c=0;
        while(l>r)
        {
            if(s[r++]!=s[l--])
            {
                c=1;
            }
            
        }
        
        if(c==0){
            u+=v;
        }
    }
    cout<<u;
    
   return 0;
} 
