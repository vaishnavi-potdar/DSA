#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {2, 5, 1, 7, 8};


    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    // cout << arr[0]; // -> *arr
    // cout << arr[1]; // => *arr + 1
}