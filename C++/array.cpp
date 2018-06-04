#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int a[1000],n,temp,i,j;
    
	cin>>n;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0,j=n-1;i<j+1;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
    for(i=0;i<n;i++)
		cout<<a[i]<<" ";

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

