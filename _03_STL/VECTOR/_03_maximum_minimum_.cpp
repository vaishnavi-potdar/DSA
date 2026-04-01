#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    vector<int> v(num);

    for (int i=0; i<num; i++){
        cin >> v[i];

    }

    cout<<"minimum " << v[0] <<endl;
    cout << "maximum " << v[num-1] << endl;
}
