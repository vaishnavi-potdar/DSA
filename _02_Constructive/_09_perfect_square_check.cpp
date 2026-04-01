#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    bool perfect_square = false;

    for(int i=1; i<=num; i++){
        if(i*i==num){
        perfect_square = true;
        break;
        }
    }

   if(perfect_square){
    cout << " perfect square" << endl;
   }else{
    cout << " not perfect square " << endl;
   }
}