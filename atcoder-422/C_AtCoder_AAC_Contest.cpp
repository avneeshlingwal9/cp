#include <iostream>

using namespace std;

int main(void){


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases; 
    unsigned int nA , nB , nC; 

    cin >> testCases; 

    for(int i = 0 ; i < testCases ; i++){

        cin >> nA >> nB >> nC; 

        cout << min(nA ,min(nC , (nA + nB + nC)/3)) << endl;

    }

    return 0;


}