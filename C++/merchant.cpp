# include<bits/stdc++.h>
using namespace std;
int main() 
{    
    int n;
    cin>>n;
    int a[n];
    int c=0;
    
    int t1=0,t2=0,t3=0,t4=0,t5=0;
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
    sort(a,a+n);
    int i=0;
    while(i<n)
    {
        if(a[i]==a[i+1])
        {
            c++;
            i+=2;
        }
        else{
            i++;
        }
    }
 cout<<c;
    return 0;
} 
