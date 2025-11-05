#include <iostream>
#include <vector>

using namespace std;

int main(void){


    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int rows , cols ; 

    cin >> rows >> cols; 

    cin.ignore();

    vector<string> mat(rows); 

    for(int i = 0 ; i < rows ; i++){

        getline(cin, mat[i]); 

    }

    vector<vector<int>> dir = {

        {0,1},
        {1,0},
        {-1,0},
        {0,-1}

    };


    auto comp = [&](int i , int j){

        return (i >= 0 && i < rows && j >= 0 && j < cols);

    };


    bool satisfied = true; 

    for(int i = 0 ; i < rows; i++){

        for(int j = 0 ; j < cols ; j++){


            if(mat[i][j] == '#'){

                int currCount = 0; 
                for(auto& it : dir){

                    if(comp(it[0] + i , it[1] + j)){

                        if(mat[it[0] + i][it[1] + j] == '#'){

                            currCount++; 
                        }

                        
                    }

                }

                if(currCount == 0 || currCount == 1 || currCount == 3){
                    satisfied = false; 
                    break; 
                }

            }

        }

    }

    if(satisfied){

        cout << "Yes"; 

    }

    else{

        cout << "No"; 
    }



}