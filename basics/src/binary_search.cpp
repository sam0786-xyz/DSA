#include <iostream>
#include <vector> 
using namespace std;

int binary_search(vector <int> &arr, int n, int key){
    if (n == 0){
        return 0;
    }
    int low = 0;
    int high = n-1;

    int mid = (low+high)/2;
    while (low <= high){
        if (key == arr[mid]){
            return mid + 1;
        }
        else if (key < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        mid = (low+high)/2;
    }
    return 0;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    int result = binary_search(arr,n,key);
    cout << "The key is found at position: " << result << endl;
    return 0;
}