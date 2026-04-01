#include<bits/stdc++.h>
using namespace std;

int digitCount(int num){
    int count = 0;
    while(num > 0){
        count++;
        num = num / 10;
    }
    return count;
}

int power(int digit, int raisedTo){
    int result = 1;

    for(int i = 0; i < raisedTo; i++){
        result *= digit;
    }

    return result;
}

int main(){
    int num;
    cin >> num;

    int original = num;
    int digits = digitCount(num);
    int sum = 0;

    while(num > 0){
        int digit = num % 10;
        sum += power(digit, digits);
        num = num / 10;
    }

    if(sum == original){
        cout << "Armstrong Number";
    }
    else{
        cout << "Not Armstrong Number";
    }

    return 0;
}