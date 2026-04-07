
#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;

    while(t--){
        int a,b ,c;
        cin >> a >> b >> c;

        if( max(a,c) <= b){
            cout << "yes" << endl;
        }
        else {
            cout << "no" <<endl;
        }
    }

}


/* Air Conditioner Temperature
There are three people sitting in a room - Alice, Bob, and Charlie. They need to decide on the temperature to set on the air conditioner. Everyone has a demand each:

Alice wants the temperature to be at least 
A                                                             input          output 
A degrees.                                                    30  35  25      yes
Bob wants the temperature to be at most            
B                                                            
B degrees.
Charlie wants the temperature to be at least 
C
C degrees.
Can they all agree on some temperature, or not? */

