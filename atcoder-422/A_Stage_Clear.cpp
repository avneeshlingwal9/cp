#include <iostream>

using namespace std;

int main(void){

    
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 


    string s; 

    getline(cin, s); 

    int stage = s[0] - '0';
    int level = s[2] - '0'; 

    if(stage <= 8){


        if(level == 8){


            s[0] += 1; 
            s[2] = '1';


        }

        else{

            s[2] += 1; 

        }


    }

    cout << s << endl; 





}