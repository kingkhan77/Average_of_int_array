
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    cout<<endl<<s<<endl;
    string rev="";
    for(int i=0;i<s.length();i++) {
        rev=s[i]+rev;
    }
    cout<<"Reversed string : "<<rev;
}
