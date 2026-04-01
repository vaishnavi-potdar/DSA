#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int> ans;
    int temp = 0;
    for(int i=0; i<n; i++){

       if(v[i]!=temp){
        ans.push_back(v[i]);
       } else{
        v
       }
    }
    cout << v[n] << " " << endl;
}