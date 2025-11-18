#include <vector>
#include <iostream>
using namespace std;

vector<string>  generate(int n , vector<string> curr ){

    if(n == 1){

        return curr;

    }

    vector<string> next_set; 

    for(int i = 0 ; i < curr.size(); i+= 2){

        next_set.push_back(curr[i] + '0');

        next_set.push_back(curr[i] + '1');

        next_set.push_back(curr[i + 1] + '1');

        next_set.push_back(curr[i + 1] + '0'); 

    }


    return generate(n - 1 , next_set); 






}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; 

    cin >> n; 

    

    vector<string> curr = {"0" , "1"}; 

    vector<string> codes = generate(n , curr ); 

    for(auto& code : codes){

        cout << code << "\n"; 

    }


}