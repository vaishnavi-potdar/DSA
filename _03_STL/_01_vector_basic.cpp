#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;  // this is empty vector.
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    cout << v.size() << endl;   // output = 3   //it tells the size of vector.

    cout << v[0] << " " << v[1]  << " " << v[2]; // output = 5 6 7

    v.pop_back(); // this will erase the last element from vectoe  size of vector get decrease.
    v.push_back(0);
    cout << endl;

     cout << v[0] << " " << v[1]  << " " << v[2] << endl;

    
      cout << v[0] << " " << v[1]  << " " << v[2] << endl;
      v.clear();  // size will reset to zero
       cout << v.size() << endl; // output = 0

}

/* vector<int> v(); 
   cout << v.size();  output= 0 ,empty stack size returns
   
   vector<int> v(50,7);    the size of vector is 50  and this will prints the elements'7' for 50 times
   
   vector<int> v[50];      this is an array of 50 vectors */