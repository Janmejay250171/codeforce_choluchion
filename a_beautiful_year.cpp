#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;;
    for(int i=n;i<9000;i++){
        string s=to_string(i);
            if((count(s.begin(),s.end(),s[0]))==1 && (count(s.begin(),s.end(),s[0]))==1 &&(count(s.begin(),s.end(),s[0]))==1 && (count(s.begin(),s.end(),s[0]))==1){
                cout<<stoi(i);
                break;
            }
            else{
                i++;
            }
        }
    }
    
