# include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],c=1;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
sort(a,a+n);

    for(int j=n-2;j>=0;j--) {
        if(a[n-1]==a[j])
        {
            c++;
        }
    }

cout<<c;

} 
