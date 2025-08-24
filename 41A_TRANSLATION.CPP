#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int l=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == t[s.size()-i-1]){
            l+=1;
        }
    }
    if(l==s.size() && s.size()==t.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}