/*#include<bits/stdc++.h>
using namespace std;

int ascending( int num){
    int count = 0;
    while(num>=0){
      num %= 10;
      count ++;
      num /= 10;
    }
   

    return count;
}

int main(){
    int n;
    cin >> n;

    cout << ascending( n);
}*/
#include <iostream>
using namespace std;

int main() {
    int n = 12345;
    int count = 0;

    while (n > 0) {
        int digit = n % 10;  // gets last digit
        count++;
        n = n / 10;          // removes last digit
    }

    cout << "Length (number of digits): " << count;
}