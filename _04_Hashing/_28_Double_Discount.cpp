#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        } 
        for (int i = 0; i < n; i++){
            cin >> b[i];
        } 

        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int maximum = max(a[i], a[j]);
                int minimum = min(a[i], a[j]);

                int price = minimum + (maximum - min(maximum/2, 100));

                if (price <= k) {
                    ans = max(ans, b[i] + b[j]);
                }
            }
        }
        cout << ans << endl;
    }
}
/*
Double Discount
input                           output
4                                14
3 16                             17
10 8 14                          442
5 2 12                           0
3 20
10 8 14
5 2 12
5 230
230 102 98 308 250
231 123 211 120 345
4 100
90 120 60 150
10 45 19 78
*/
