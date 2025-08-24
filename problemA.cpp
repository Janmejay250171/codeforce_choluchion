#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        int l = 0;  
        for(int e = 0; e < n; e++){
            for(int f = e+1; f < n; f++){
                if(arr[e] == arr[f]){ 
                    l = 1;
                }
            }
        }
        if(l == 1){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
}
