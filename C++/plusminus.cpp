# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float p=0,m=0,z=0;
    cin>>n;
    float a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

    for(int i=0;i<n;i++) {

       if(a[i]==0)
       {
           z++;
       }
       else if(a[i]>0)
       {
           p++;
       }
       else
       m++;
    }


cout<<fixed<<setprecision(6)<<p/n<<endl;
 cout<<fixed<<setprecision(6)<<m/n<<endl;
 cout<<fixed<<setprecision(6)<<z/n;
} 
