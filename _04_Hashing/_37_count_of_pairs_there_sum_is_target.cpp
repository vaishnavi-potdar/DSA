/* by optimized approach*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int r = t - a[i];

        count += mp[r];

        mp[a[i]]++;
    }

    cout << count << endl;
}