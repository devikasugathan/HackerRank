#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
   cin.precision(6);
    cin>>d;
    
 cout<<fixed<<setprecision(3)<<d<<endl;
    cin.precision(15);
    cin>>e;
   
     cout<<fixed<<setprecision(9)<<e<<endl;
   
   
   
   // Complete the code.
    return 0;
}

