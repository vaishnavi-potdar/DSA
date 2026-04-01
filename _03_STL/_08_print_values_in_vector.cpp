#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> vec ;

    vec.push_back(25); 
    vec.push_back(35); 
    vec.push_back(45);   // add element to the last of vector
    
   cout << vec.size()<< endl;   //  tells size of vector
   cout << vec.capacity() <<endl;
    vec.pop_back();   // delete last element  45

    for(int val : vec){
        cout << val << endl;
    }

    cout << vec[0] << endl;   // both format are use for find ith valur 
    cout << vec.at(0);
   
}