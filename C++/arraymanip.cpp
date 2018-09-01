#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,q;
  cin>>n>>q;
  int r,s,t;
  int a[n];
  for(int i=0;i<q;i++)
  {
      cin>>r>>s>>t;


  for(int i=0;i<n;i++)
  {

  if(i==r)
  {
      a[i]+=t;
  }
  else if(i==s)
  {
      a[i]+=t;
  }
  else
  a[i]+=0;
  }
}
 int max = a[0];

     for(int i = 1; i<n; i++)
     {
          if(a[i] > max)
                max = a[i];
     }
  cout<<max;

    return 0;
}
