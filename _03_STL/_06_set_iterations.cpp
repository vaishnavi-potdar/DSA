#include<bits/stdc++.h>
using namespace std;

int main(){
    set <int> s;

    s.insert(4);
    s.insert(1);
    s.insert(10);
    s.insert(3);

    s.erase(s.begin()); // it erase the smallest element in the set 

    cout << *s.begin(); //it prints the value of smallest element in set 
                        // output = 3    , smallest element is 1 but it is removed by erase function.
                        // the element in set are in always sorted order
}