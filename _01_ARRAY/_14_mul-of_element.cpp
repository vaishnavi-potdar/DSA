// multipication of 1st and 3rd element with given output;
#include<iostream>
using namespace std;
/*int main(){
    int n;
   int array[5]={4,3,6,5,7};
    int mul;

    cout<< " the multiplication of 1st and 3rd element is: " << array[0]*array[2] << endl;
}*/



// multiplication of all element in array
 int main(){
   int n=5;
    int array[n]={10,20,30,40,50};
    int mul=1;
    for(int i=0; i<n; i++){
        mul*=array[i];
    }
        cout<<mul<<" ";
 }