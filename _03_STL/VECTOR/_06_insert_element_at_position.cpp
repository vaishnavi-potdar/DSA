#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 5};
   
    //inserting 'x' at index pos
    v.insert(v.begin() + 2, 3);

    for(int i : v)
        cout << i << " ";
}
