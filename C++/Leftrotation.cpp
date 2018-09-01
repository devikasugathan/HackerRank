#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,d;
    cin>>n>>d;
    long long int a[n];
    for(int k=0;k<n;k++)
    {
        cin>>a[k];
    }
    int b[n];
    int l=n;
    int i,j=0;
    for (i = 0; i < l; i++)
        {
            if(i+(d%n) > l-1)
                b[i]=a[j++];
            else
                b[i] = a[i + d%n];
        }

    for(int k=0;k<n;k++)
    {
        cout<<b[k]<<" ";
    }
    return 0;
}
