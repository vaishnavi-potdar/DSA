#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    vector<int> player1(n), player2(n);
    
    for(int i = 0; i < n; i++){
        
        int u, v;
        cin >> u >> v;
        
        if(i == 0){
            player1[i] = u;
            player2[i] = v;
        }
        
        else{
            player1[i] = player1[i-1] + u;
            player2[i] = player2[i-1] + v;
        } 
    }
    
    vector<int> lead(n);
    
    for(int i = 0; i < n; i++){
        lead[i] = abs(player1[i] - player2[i]);
    }
    
    int leader = 0;
    int maxScore = -1;
    
    for(int i = 0; i < n; i++){
        if(maxScore < lead[i]){
            maxScore = lead[i];
            
            if(player1[i] > player2[i])
                leader = 1;
                
            else
                leader = 2;
        }
    }
    
    cout << leader << ' ' << maxScore;
}
