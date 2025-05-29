#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout << "Enter the size of the vector: ";
    int n;
    cin >> n;

    cout << "Enter the elements: ";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    cout << "Sorted array is: " << endl;
    for(auto it = arr.begin(); it != arr.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}