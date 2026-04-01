#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a ={ 5,4,1,2};
    sort(a.begin(),a.end());    

    for(int i=0; i<4; ++i)
    {
        cout << a[i] << " ";
    }
}