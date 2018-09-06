# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n],c=0;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}

    for(int j=0;j<n;j++) {

       c=c+a[j];
    }

cout<<c;

} 
