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

    unordered_set<int> s;

    
    for(int i = 0; i < n; i++){
        s.insert(arr[i]);
    }

  
    if(s.find(x) != s.end()){
        cout << "YES";
    } else {
        cout << "NO";
    }

  
}