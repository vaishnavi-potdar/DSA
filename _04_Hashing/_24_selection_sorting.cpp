  // selection sort 
 //  0  1  2  3   4   5
 // 13  46 24 52  20  9 

 // 9  46 24 52 20 13   step_1
 // 9  13 24 52 20 46   step_2
 // 9  13 20 52 24 46   step_3
 // 9  13 20 24 52 46   step_4
 // 9  13 20 24 46 52   step_5

 #include<bits/stdc++.h>
 using namespace std;

 void selection_sort( int arr[], int n){
    for(int i= 0; i<=n-2; i++){
        int mini = i;
    }

 }

 int main(){
    int n;
    cin >> n;

    int arr[n];

    for( int i=0; i<n; i++){
        cin >> arr[i];
    }

    selection_sort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;


 }

