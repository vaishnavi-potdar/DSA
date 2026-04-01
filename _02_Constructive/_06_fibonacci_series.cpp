#include<bits/stdc++.h>
using namespace std;

int fibonacciseries(int num){
     int l=0 , r=1;

     for(int i=0; i<num; i++){
      cout << l << " ";
     int temp = l;
     l = l+r;
     r = temp;

     }
   return l;

}

int main(){
    int n;
    cin >> n;

    cout << fibonacciseries(n);
}
