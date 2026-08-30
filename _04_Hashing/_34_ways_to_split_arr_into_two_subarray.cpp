#include<bits/stdc++.h>
using namespace std;
    int waysToSplit(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {

                int sum1 = 0;
                int sum2 = 0;
                int sum3 = 0;

                // First part: [0 ... i]
                for (int k = 0; k <= i; k++) {
                    sum1 += nums[k];
                }

                // Second part: [i+1 ... j]
                for (int k = i + 1; k <= j; k++) {
                    sum2 += nums[k];
                }

                // Third part: [j+1 ... n-1]
                for (int k = j + 1; k < n; k++) {
                    sum3 += nums[k];
                }

                if (sum1 <= sum2 && sum2 <= sum3) {
                    count++;
                }
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
