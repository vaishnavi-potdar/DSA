#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t) {

    unordered_map<char, int> need, window;

    for (char c : t) {
        need[c]++;
    }

    int required = need.size();
    int formed = 0;

    size_t left = 0;
    size_t minLen = INT_MAX;
    size_t start = 0;

    for (size_t right = 0; right < s.size(); right++) {

        char c = s[right];
        window[c]++;

        if (need.count(c) && window[c] == need[c]) {
            formed++;
        }

        while (formed == required) {

            // Update minimum window
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;
            }

            char remove = s[left];
            window[remove]--;

            if (need.count(remove) &&
                window[remove] < need[remove]) {
                formed--;
            }

            left++;
        }
    }

    if (minLen == INT_MAX)
        return "";

    return s.substr(start, minLen);
}

int main() {

    string s = "ADOBECODEBANC";
    string t = "ABC";

    cout << minWindow(s, t) << endl;

    return 0;
}