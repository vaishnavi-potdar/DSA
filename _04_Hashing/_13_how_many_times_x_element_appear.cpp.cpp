#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
      map<int,int> mpp;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    
    int x;
    cin >> x;
   cout << mpp[x] << endl;

}