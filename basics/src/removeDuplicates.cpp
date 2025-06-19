#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int prev = 0;
    for (int forw = 1; forw < nums.size(); ++forw) {
        if (nums[forw] != nums[prev]) {
            ++prev;
            nums[prev] = nums[forw];
        }
    }
    return prev + 1;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int newLength = removeDuplicates(nums);
    cout << "New length: " << newLength << endl;

    cout << "Modified array: ";
    for (int i = 0; i < newLength; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}