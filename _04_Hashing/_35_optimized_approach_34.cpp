#include<bits/stdc++.h>
using namespace std;

    int waysToSplit(vector<int>& nums) {
        int n = nums.size();
        const int MOD = 1e9 + 7;

        vector<long long> prefix(n + 1, 0);

        // Build prefix sum
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        long long total = prefix[n];
        long long count = 0;

        for (int i = 1; i <= n - 2; i++) {

            // Find first j such that:
            // prefix[j] >= 2 * prefix[i]
            int left = lower_bound(
                prefix.begin() + i + 1,
                prefix.begin() + n,
                2 * prefix[i]
            ) - prefix.begin();

            // Find first j such that:
            // 2 * prefix[j] > total + prefix[i]
            int right = upper_bound(
                prefix.begin() + i + 1,
                prefix.begin() + n,
                (total + prefix[i]) / 2
            ) - prefix.begin() - 1;

            if (left <= right) {
                count += right - left + 1;
                count %= MOD;
            }
        }

        return count;
    }

    int main(){
        int n;
        cin >> n;
        vector<int> nums(n);

        for(int i=0; i<n; i++){
            cin >> nums[i];
        }
        cout << waysToSplit(nums) << endl;
    }