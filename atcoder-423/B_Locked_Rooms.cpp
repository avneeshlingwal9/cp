#include <iostream>
#include <vector>

using namespace std; 

int main(void){

    ios::sync_with_stdio(false);

    cin.tie(nullptr);


    int N ; 

    cin >> N; 

    vector<int> rooms(N); 

    for(int i = 0 ; i < N; i++){

        cin >> rooms[i]; 

    }


    // Start from beginning. 

    int reachable = 0; 

    int start = 0; 

    while(start < N && rooms[start] == 0){

        start++; 

    }

    reachable += (start + 1); 


    int end = N - 1; 

    while(end >= 0 && rooms[end] == 0){

        end--;
    }

    reachable += (N - end); 

    cout << max(0 , N + 1 - reachable) << endl; 



        
    return 0; 

}

    

