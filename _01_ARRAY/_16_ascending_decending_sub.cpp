#include <bits/stdc++.h>
using namespace std;

int main() {

    int num;
    cin >> num;

    int prev = -1;

    while(num != prev){

        prev = num;

        int digit[4];

        int temp = num;
        for(int i = 0; i < 4; i++){
            digit[i] = temp % 10;
            temp /= 10;
        }

        // ascending
        for(int i = 0; i < 4; i++){
            for(int j = i + 1; j < 4; j++){
                if(digit[i] > digit[j]){
                    int t = digit[i];
                    digit[i] = digit[j];
                    digit[j] = t;
                }
            }
        }

        int small = 0;
        for(int i = 0; i < 4; i++){
            small = small * 10 + digit[i];
        }

        // descending
        for(int i = 0; i < 4; i++){
            for(int j = i + 1; j < 4; j++){
                if(digit[i] < digit[j]){
                    int t = digit[i];
                    digit[i] = digit[j];
                    digit[j] = t;
                }
            }
        }

        int large = 0;
        for(int i = 0; i < 4; i++){
            large = large * 10 + digit[i];
        }

        num = large - small;

        cout << large << " - " << small << " = " << num << endl;
    }

    return 0;
}