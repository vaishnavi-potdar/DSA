#include<iostream>
using namespace std;
int main(){
    int n=5;
    int array[n]={10,20,30,40,50};
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=array[i];
    }
        cout<<sum<<" ";
        // sum+=array[i];
        
    
    return 0;
}