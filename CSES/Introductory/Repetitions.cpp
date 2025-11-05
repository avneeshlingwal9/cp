#include <bits/stdc++.h>
using namespace std;

int main(void){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    string s; 

    getline(cin, s); 


    // To find the longest repeating sequence. String is containing only 4 characters.
    // A , C, G , T.
    // So, what do we actually do then ? 
    // So, traverse the string, and keep the count of curr character seen.

    char curr = ' ';
    int curr_count = 0; 

    int max_count = 0; 

    for(int i= 0; i < s.size(); i++){

        if(s[i] == curr){

            curr_count++; 

        }

        else{

            curr_count = 1; 

            curr = s[i]; 

        }

        max_count = max(max_count, curr_count); 

    }

    cout << max_count << "\n"; 




}