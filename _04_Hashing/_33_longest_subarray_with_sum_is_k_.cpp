#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter K: ";
    cin >> k;

    unordered_map<int, int> mp;

    int prefixSum = 0;
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        // If prefixSum itself is K
        if (prefixSum == k) {
            maxLength = i + 1;
        }

        // Check if there is an earlier prefix sum
        // such that currentSum - oldSum = K
        if (mp.find(prefixSum - k) != mp.end()) {
            int length = i - mp[prefixSum - k];
            maxLength = max(maxLength, length);
        }

        // Store only the first occurrence
        if (mp.find(prefixSum) == mp.end()) {
            mp[prefixSum] = i;
        }
    }

    cout << "Longest subarray length: " << maxLength << endl;

    return 0;
}