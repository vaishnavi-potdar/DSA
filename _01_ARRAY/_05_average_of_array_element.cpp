#include<iostream>
using namespace std;
int main(){
    int n=5;
    int array[n]={10,20,30,40,50};
    int sum=0;
    int average;
    for(int i=0; i<5; i++){
        sum+=array[i];
        
    }
    average=sum/n;
    cout<<average<<" ";
     

}