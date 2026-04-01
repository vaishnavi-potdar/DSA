#include<bits/stdc++.h>
using namespace std;

int freq(int num, vector<int> arr, int i){
    int count = 0;

    for(int j = i; j < arr.size(); j++){
        if(arr[j] == num){
            count++;
        }
    }

    return count;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr = {1, 2, 1, 3, 2};
     
    for(int i = 0; i < arr.size(); i++){
        int count = freq(arr[i], arr, i);
        cout << count << endl;
    }
}
