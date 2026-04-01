#include<bits/stdc++.h>
using namespace std;

int main(){
    set <int> s;

    s.insert(10);
    s.insert(15);

    cout << s.count(10) <<endl; // output=1 coz 10 is preaent in set
    cout << s.count(9) <<endl;  // otp=0
    cout << s.count(15) <<endl; //otp=1
    cout << s.count(11) <<endl; // otp=0

    s.erase(10); //no matter how many times u inserted 10 once u erase it will gone but 
                 // after erase u inserted the element it will back
                 
    cout << s.count(10) << endl;    //otp=0 coz we erased it
}