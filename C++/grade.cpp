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
    
    for(int i=0;i<n;i++)
    { int s=a[i];
      int j=0;
       if(a[i]<38)
       {
           a[i]=a[i];
       }
       else {
           
       
      while(s%5!=0&&j<3)
      {
          s++;
          j++;
      }
      int r=s-a[i];
      if(r<3)
      {
          a[i]=s;
      }
       }
      
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}

