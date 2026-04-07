#include<bits/stdc++.h>
using namespace std;

void frequency(vector<int> &num, int n){

    map<int,int> mpp;

    for(int i=0; i<n; i++){
        mpp[num[i]]++;
    }
    
    for(auto it : mpp){
      cout << it.first << "->" << it.second << endl;
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
   
     frequency(arr,n) ;
    
    return 0;
}