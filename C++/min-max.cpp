# include<bits/stdc++.h>
using namespace std;
int main()
{      long long int a[5],min=0,max=0;
for(int i=0;i<5;i++)
{
    cin>>a[i];
}
sort(a,a+5);
for(int i=0;i<4;i++){
    min=min+a[i];
}
for(int i=1;i<5;i++){
    max=max+a[i];
}
    cout<<min<<" "<<max;



} 
