#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "size of array : " << endl;
    cin >> n;

    vector<int> arr(n);

     cout << "enter the array elements : "<<endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int maxelement = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > maxelement){
            maxelement = arr[i];
        }
    }

    vector<int> maxfreq(maxelement+1);

    int maxfreqq = maxfreq[arr[0]];
    int maxfreqelement = arr[0];

    for(int i=0; i<n; i++){
        maxfreq[arr[i]]++;

        if(maxfreq[arr[i]] > maxfreqq){
            maxfreqq = maxfreq[arr[i]];
            maxfreqelement = arr[i];
        }
    }
    cout << "the element have maximun frequency : " << maxfreqelement << endl;
    cout << "maximum element in array : " << maxelement << endl;

}