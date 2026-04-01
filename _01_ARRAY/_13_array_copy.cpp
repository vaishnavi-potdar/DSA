#include<iostream>
using namespace std;
int main(){
    int arr[5]={10, 20, 30, 40, 50};
    int new_array[5];
    

    for(int i=0; i<5; i++)
        new_array[i] = arr[i];


      for(int i=0; i<5; i++){
         cout << new_array[i] << " "; 
      }
    

}