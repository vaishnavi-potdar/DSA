#include<bits/stdc++.h>
using namespace std;

/*

*/

bool nearbyduplicate( vector<int>& arr, int k){
    int n = arr.size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n && j<k+1; j++)
        if(arr[i]==arr[j])
        return true;
    }
    return false;
}

int main(){
int n,k;
cin >> n >> k;

vector<int> arr(n);

for( int i=0; i<n; i++){
    cin >> arr[i];
}
cout << (nearbyduplicate(arr,n)) << endl;
}