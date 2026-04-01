#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
     
   v.insert(v.begin()+3, 2);           //v.erase(find(v.begin(), v.end(), 'f')); 
   
    v.erase(find(v.begin(),v.end(),3));

    for(int i: v){
        cout << i << " ";
    }
}