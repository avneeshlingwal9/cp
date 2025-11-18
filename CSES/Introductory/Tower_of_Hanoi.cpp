#include <iostream>
#include <vector>

using namespace std;

void tower_of_hanoi(int n , int source , int aux , int dest , vector<pair<int,int>>& ans){

    if(n == 0){
        return;
    }
    tower_of_hanoi(n - 1, source , dest , aux , ans);

    ans.push_back({source , dest}); 

    tower_of_hanoi(n - 1 , aux , source , dest, ans); 



}
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 

    cin >> n; 
    vector<pair<int,int>> ans;
    tower_of_hanoi(n , 1 , 2 ,3 , ans);

    cout << ans.size() << "\n";

    for(auto[s, d] : ans ){

        cout << s << " " << d << "\n"; 

    }

}