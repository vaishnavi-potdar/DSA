#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    bool isprime = true;

    for(int i=2; i<n; i++ ){
        if(n % i == 0){
            isprime = false;
            break;
        }
    }
    if (isprime){
        cout << " prime" << endl;
    } else {
        cout << " not prime " << endl;
    }
}


