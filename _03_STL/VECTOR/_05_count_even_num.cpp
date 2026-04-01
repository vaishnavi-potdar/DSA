#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count=0;

    vector<int> v(n);{

        for(int i=0; i<n; i++ ){
            cin >> v[i];
        
        if(v[i]%2==0){
            count++;
        }
        
    }
    cout << count <<endl;
}
}