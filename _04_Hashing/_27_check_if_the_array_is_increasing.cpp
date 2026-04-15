
// if the array are increasing order then print yes otherwise no 
// 5
// 5 4 3 6 2

#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int>d(n);

    for(int i=0; i<n; i++){
        cin >> d[i];
    }

    bool result = true;

    for(int i=0; i<n-1; i++) {
        if(d[i] >= d[i+1]){
            result = false;  
            break;
        }
    }
    if(result){
           cout << "yes" << endl;
        }

         else{
              cout << "no" << endl;
             }
}
 
