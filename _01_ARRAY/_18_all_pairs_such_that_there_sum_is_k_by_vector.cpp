#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>  v(n);
    int count=0;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }


    for(int i=0; i<n; i++){
        for( int j=i+1; j<n; j++){
            int result = v[i]+v[j];
            if(result == k){
                count++;
            }
        }
    }
    cout << count << endl;
}