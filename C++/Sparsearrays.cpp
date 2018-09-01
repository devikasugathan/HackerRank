#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];

    }
    int m;
    cin>>m;
    string q[m];
    for(int i=0;i<m;i++)
    {
        cin>>q[i];

    }

    for(int j=0;j<m;j++)
    {   int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==q[j])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
