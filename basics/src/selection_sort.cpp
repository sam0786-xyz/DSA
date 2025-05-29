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

    // Selection Sort
    for (int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if (arr[j] < arr[min])
                min = j;
        }
        // Swap
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    // Print sorted array
    for(auto it = arr.begin(); it != arr.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}