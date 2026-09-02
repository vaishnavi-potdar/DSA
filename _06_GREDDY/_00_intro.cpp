#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cout << "enter n " << endl;
    cin >> N;

    int currency[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    vector<int> ans;

    int i = 0;

    while (N > 0)
    {
        int note = N / currency[i];

        while (note--)
        {
            ans.push_back(currency[i]);
        }

        N %= currency[i];
        i++;
    }

    // Print the answer
    for (int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}