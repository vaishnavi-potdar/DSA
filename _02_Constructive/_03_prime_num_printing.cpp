#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter number " <<endl;
    cin >> n;

    for (int i=2; i<n; i++ ){
    bool isprime = true;

    for (int j=2; j<i; j++){
        if(i % j == 0){
            isprime = false;
            break;
        }
    }
    if (isprime){
        cout << i << " ";
    }
}
}

