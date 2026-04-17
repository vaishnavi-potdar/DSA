#include<bits/stdc++.h>
using namespace std;

void printing(int n){
    for(int i=0; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
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
/*
2 3 4

1
22
333

1
22
333
4444
*/