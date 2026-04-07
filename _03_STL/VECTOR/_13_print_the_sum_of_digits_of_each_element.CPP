#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int n){
   int sum=0;
   while(n>0){
    sum += n % 10;
    n /= 10;
   }
   return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int> result;
    for(int i=0; i<n; i++){
        result.push_back(sum_of_digits(v[i]));
    }

    for (int i=0; i<n; i++){
        cout << result[i] << " ";
    }
}