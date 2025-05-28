#include <iostream>
#include <map>
using namespace std;

int main () {
    cout << "Enter the number of elements: ";
    int n; 
    cin >> n; 
    int arr[n];
    cout << "Enter the elements: ";
    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // iterate in the map
    // for(auto it : mpp) {
    //     cout << it.first << "->" << it.second << endl;
    // }
    

    cout << "Enter the number of queries: ";
    int q;
    cin >> q;
    while (q--) {
        cout << "Enter the number: ";
        int number;
        cin >> number;
        cout << "Frequency of " << number << " is " << mpp[number] << endl;
    }

    return 0;
}

