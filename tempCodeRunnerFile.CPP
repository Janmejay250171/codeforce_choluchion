#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            c+=((-1)*i);
        }
        else{
            c+=i;
        }

    }
   cout<<c; 
}