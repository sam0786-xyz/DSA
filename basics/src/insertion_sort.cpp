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

    // Insertion Sort
    for (int i = 0;i<=n-1;i++)
    {
        int j = i;
        while (j>0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    
    // Print sorted array
    cout << "Sorted array is: " << endl;
    for(auto it = arr.begin(); it != arr.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}