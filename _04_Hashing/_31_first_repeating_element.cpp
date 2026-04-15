#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    for(int i = 0; i < n; i++){
        if(freq[arr[i]] > 1){
            cout << arr[i];
         
        }
    }
}