#include <bits/stdc++.h>
using namespace std;

int occurence_Count(int number, vector<int> &arr) {
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == number) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int number;
    cin >> number;

    cout << occurence_Count(number, arr);

    return 0;
}

 // git commands    git add .
 // git commit -m "msg"
 // git push 




/*

7. Longest Subarray with Sum = K

👉 Use prefix sum + map

8. Count Subarrays with Sum = K

👉 Variation of above

9. Find Missing Number (0 to n)

👉 Use hashing or sum formula

10. Intersection of Two Arrays

👉 Count common elements

11. Longest Consecutive Sequence 🔥

👉 Input: 100,4,200,1,3,2 → Output: 4 (1,2,3,4)

12. Subarray with Zero Sum

👉 Return true/false

13. Count Pairs with Given Sum

👉 Input: [1,5,7,-1,5], sum = 6 → Output: 3

14. Group Anagrams

👉 Input: ["eat","tea","tan","ate","nat","bat"]

15. Top K Frequent Elements

👉 Return most frequent k elements

🔴 Advanced Level
16. Longest Subarray with Equal 0s and 1s

👉 Convert 0 → -1 trick

17. Minimum Window Substring 🔥

👉 Sliding window + hashing

18. Longest Substring Without Repeating Characters

👉 Classic problem

19. Count Distinct Elements in Every Window

👉 Sliding window + map

20. Rabin-Karp Algorithm (String Hashing)

👉 Pattern matching*/