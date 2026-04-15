#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    map<int ,int> mpp;

    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }
   
    vector<int> vnn;
    for(auto it : mpp){
        int v = it.second;
        vnn.push_back(v);
    }
 
}


  
    