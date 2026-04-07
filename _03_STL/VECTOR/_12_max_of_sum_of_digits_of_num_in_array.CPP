#include <bits/stdc++.h>
using namespace std;


int sumofdigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;   // calculate the sum of digits 
}

int main(){
    int n;
    cout << "enter the size of array : ";
    cin >> n;

    vector<int> v(n);
    cout << "enter the elements : ";

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> result;


    for(int i = 0; i < n; i++){
        result.push_back(sumofdigits(v[i]));
    }

     cout << "the sum of digits of each element is : " << endl;
    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }


}