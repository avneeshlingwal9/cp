#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 

    getline(cin, s); 

    // So, to form any pallidrome from the given characters.
    // So, simply count all the occurences. Then, if more than 2 characters have odd occurences, then it implies that, no solution.
    // else simply put n/2 characters on a string, and then in the end concat the odd character if any and also the reversed string.
    // For example:
    // AAAACACBA

    // A => 6 , B => 1 , C => 2 

    // AAAC B CAAA

    vector<int> frequency(26,0); 

    for(auto& ch : s){

        frequency[ch - 'A']++; 

    }

    string oddOne ;

    string half_pallindrome; 

    for(int i = 0; i < 26; i++){

        if(frequency[i] & 1 ){

            if(!oddOne.empty()){

                cout << "NO SOLUTION" << "\n";
                return 0;

            }

            else{

                oddOne = string(frequency[i] , 'A' + i);

            }

        }

        else{

            half_pallindrome += string(frequency[i]/2 , 'A' + i); 

        }

    }

    string other_half = half_pallindrome; 

    reverse(other_half.begin(), other_half.end()); 




    cout << half_pallindrome << oddOne << other_half << "\n"; 
    







}