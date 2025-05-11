#include<iostream>
using namespace std;

int main() {
    int i, j;
    // 1
    // for (int i=0; i<5; i++){
    //     for (int j=0; j<5; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (i=0; i<5; i++){
    //     for (j=0; j<i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (i=0; i<5; i++){
    //     for (j=0; j<i+1; j++){
    //         cout << j+1;
    //     }
    //     cout << endl;
    // }
    
    // for (i=1; i<6; i++){
    //     for (j=1; j<i+1; j++){
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // for(i=0; i<5; i++){
    //     for (j=0; j<5-i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    for(i=0; i<5; i++){
        for (j=0; j<5-i; j++){
            cout << j+1;
        }
        cout << endl;
    }
    return 0;
}