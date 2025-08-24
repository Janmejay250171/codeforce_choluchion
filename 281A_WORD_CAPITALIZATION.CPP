#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string p="";
    p=p + toUpperCase(s[0]);
    for(int i=1;i<n;i++){
        p=p+s[i];
    }
    cout<<p;
}