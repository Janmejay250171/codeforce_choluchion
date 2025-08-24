#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int c = 1;
    for(int i = 0; i < s.size(); i++){
        for(int j = i+1; j < s.size(); j++){
            if(s[i] == s[j]){
                c++;
                if(c >= 7){
                    break;
                }
            } else {
                break;
            }
        }
        if(c >= 7){
            break;
        }
        c = 1;
    }

    if(c >= 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
