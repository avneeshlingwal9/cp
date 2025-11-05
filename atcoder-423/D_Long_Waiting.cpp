#include <bits/stdc++.h>
using namespace std; 




int main(void){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long time = 0; 

    int N , maxAllowed ; 

    cin >> N >> maxAllowed; 
    
    vector<vector<int>> groups(N, vector<int>(3 , 0)); 

    for(int i = 0 ; i < N; i++){

        cin >> groups[i][0] >> groups[i][1] >> groups[i][2]; 

    }

    priority_queue<pair<long long,int> , vector<pair<long long,int>> , greater<pair<long long,int>>> pq; 

    int currMembers = 0; 


    for(int i = 0 ; i < N ; i++){

        int enterTime = groups[i][0];

        int stayTime = groups[i][1]; 

        int members = groups[i][2]; 

        while(!pq.empty() && currMembers + members > maxAllowed){

            currMembers -= pq.top().second; 

            time = max(time , pq.top().first); 

            pq.pop(); 
        }

        time = time > enterTime ? time : enterTime;

        cout << time << endl; 

        pq.push({enterTime + stayTime , members});


        currMembers += members; 



        
        

    }

    return 0; 

}