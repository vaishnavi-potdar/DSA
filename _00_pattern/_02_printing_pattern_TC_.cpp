#include<bits/stdc++.h>
using namespace std;

void printing(int n){
    for(int i=0; i<n; i++){
        for(int i=0; i<n; i++){
            cout << "*";
        }
        cout<< endl;
    }
}

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        printing(n);
    }
}
/*2
3 4
***
***
***
****
****
****
*****/