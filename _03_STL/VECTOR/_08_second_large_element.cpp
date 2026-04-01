#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    vector<int> v(n);
    int largest;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    largest=v[0];
     for(int i=0; i<n; i++){
       if( largest > v[i] ){
        largest=v[i];
        
       }
        int secondlast= v[i-1];
        cout << secondlast <<endl;
    }

   


    }

