#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
 string s;
string p;
    getline(cin,s);
    getline(cin,p);
  int len1 = s.size(); 
     int len2 = p.size(); 
    cout<<len1<<" "<<len2;
    string l=s+p;
    cout<<"\n"<<l;
char c =s[0];
    char r=p[0];
    s[0]=r;
    p[0]=c;
    cout<<"\n"<<s<<" "<<p;
    return 0;
}
