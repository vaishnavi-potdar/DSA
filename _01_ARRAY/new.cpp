#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p1Score = 0, p2Score = 0;
    int leader = 0, maxScore = -1;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

    
        p1Score += a;
        p2Score += b;

        int Leadd = abs(p1Score - p2Score);

        if(Leadd > maxScore) {
            maxScore = currentLead;

            if(p1Score > p2Score)
                leader = 1;
            else
                leader = 2;
        }
    }

    cout << leader << " " << maxScore;

    return 0;
}