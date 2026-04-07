#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int t;
    cin >> t;

    vector<int> arr(n+1);

    while(t--){
        int l,r;
        cin >> l >> r;

        arr[l]+=1;

        if(r<=n){
        arr[r+1] -= 1;
        }

    }

     for(int i=1; i<=n; i++){
        arr[i]= arr[i]+arr[i-1];
    }

        for(int i=1; i<=n; i++){
            cout << arr[i] << " ";
        }
}