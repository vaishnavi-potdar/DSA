#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string s = to_string(N);
        int n = s.length();
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            arr[i] = s[i] - '0';
        }
        
        cout << arr[0] + arr[n - 1] << endl;
    }

    return 0;
}