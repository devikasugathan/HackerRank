# include<bits/stdc++.h>
using namespace std;
int main() 
{    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int r=a[n-1];
    int c=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]==r)
       {
           c++;
       }
    }
    cout<<c;
    return 0;
} 
