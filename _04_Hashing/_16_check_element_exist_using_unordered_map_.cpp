#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x;
    cin >> x;

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    if(freq[x] > 0){
        cout << "yes";
    } else {
        cout << "no";
    }

   
}