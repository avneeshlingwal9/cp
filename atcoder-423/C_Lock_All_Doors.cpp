#include <iostream>
#include <vector>

using namespace std; 

int main(void){

    ios::sync_with_stdio(false);

    cin.tie(nullptr);


    int N  , P; 

    cin >> N >> P; 

    vector<int> rooms(N); 

    for(int i = 0 ; i < N; i++){

        cin >> rooms[i]; 

    }


    // Find leftmost open door. 

    int left = 0 ;

    while(left < N && rooms[left] == 1){

        left++; 

    }

    left = min(left , P);

    int right = N - 1; 

    while(right >= 0 && rooms[right] == 1){

        right--; 

    }

    right = max(right, P); 

    


    long long minOpr = 0 ;

    if(left == right){

        if(rooms[left] == 1){
            cout << 0 << endl; 
        }

        else{
            cout << 1 << endl; 
        }

    }

    else{
        for(int i = left ; i < N && i <= right  ; i++){

        if(rooms[i] == 0){

            minOpr++; 

        }

        else{

            minOpr += 2; 
        }

    }
}

    cout << minOpr << endl; 

   

        
    return 0; 

}

    

