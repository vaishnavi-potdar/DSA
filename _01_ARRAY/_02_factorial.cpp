#include<iostream>
using namespace std;
int main(){
   int n;
   cin >> n;

   int arr[n];
   int fact = 1;

   for ( int i=1; i<n; i++){
     fact = fact * arr[i];
   }
      cout << fact << endl;  
    
}