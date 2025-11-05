#include <vector>
#include <iostream>
#include <algorithm>
using namespace std; 

int main(){

    ios::sync_with_stdio(false);

    cin.tie(nullptr); 

    int N , K; 

    cin >> N >> K; 

    vector<int> ans = {K}; 

    // Just reverse the process. 

    for(int i = 0 ; i < N ; i++){


        vector<int> nxt; 

        for(auto& el : ans){

            // Split it into two halves. 

            int toIns = el/2; 

            nxt.push_back(toIns); 
            nxt.push_back(el - toIns); 

        }

        ans = nxt; 

    }


    int imbalance = *max_element(ans.begin(), ans.end()) - *min_element(ans.begin(), ans.end());

    cout << imbalance << endl; 

    for(auto& el : ans){

        cout << el << " "; 

    }






    

}