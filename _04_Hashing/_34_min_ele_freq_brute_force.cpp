/*
we are given an array of numbers we have to find and print any number with maximum frequency and minimum frequency
example  

arr = [3, 2, 3, 2, 4, 3]

3 - 3
2 - 2
4 - 1

maximum freq element is 3 , freq is 3
minimum freq element is 4 , freq 1

  this is brute force approach which is work in O(n^2)
  

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int count =0; 
    int maxelement =-1,minelement=-1;
    int maxcount, mincount;

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
             if(arr[i] == arr[j]){
                count++;
             }
        }
        if(maxcount <count){
            count = maxcount;
            maxelement = arr[i];
        } if(mincount = count){
            count = mincount;
            minelement = arr[i];
        }
    }
    cout << "Max frequency element: " << maxelement 
         << " Frequency: " << maxcount << endl;

    cout << "Min frequency element: " << minelement 
         << " Frequency: " << mincount << endl;
}*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int count =0; 
    int maxelement =-1,minelement=-1;
    int maxcount, mincount;

for(int i = 0; i < n; i++) {

    // skip if already processed
    bool visited = false;
    for(int k = 0; k < i; k++) {
        if(arr[i] == arr[k]) {
            visited = true;
            break;
        }
    }
    if(visited) continue;

    int count = 0;

    for(int j = 0; j < n; j++) {
        if(arr[i] == arr[j]) {
            count++;
        }
    }

    if(count > maxcount) {
        maxcount = count;
        maxelement = arr[i];
    }

    if(count < mincount) {
        mincount = count;
        minelement = arr[i];
    }
}
}