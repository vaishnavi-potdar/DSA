 // pattern => nested loop


 // 1] outer loop -> count the no of lines (rows)
 // 2] inner loop -> count the no of columns 
 // 3] print the "*" print them inside the inner for loop 
 // 4] observe symmmetry (optional step)


#include<bits/stdc++.h>
using namespace std;

void printing(int n){
    for (int i=0; i<n; i++){
        for( int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
            
    }
}

int main(){
    int n;
    cin >> n;
    printing(n);
}