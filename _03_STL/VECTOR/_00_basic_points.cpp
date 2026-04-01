#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printvec(vector<string> v){
cout <<"size " <<v.size() <<endl;
for(int i=0; i<v.size(); i++){ // v.size  -> O(1)
    cout<< v[i] <<" ";
}
//v.push_back(2);
cout << endl;

}

int main(){
    vector<string> v;
    int n;
    cin >> n;
    for(int i= 0; i<n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    printvec(v);

}