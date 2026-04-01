#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int sum=0;
    vector<int> v(n);

    for(int i=0; i<=n; i++){
        cin >> v[i];
        sum+=i;
    }
        cout <<  sum <<endl;

}