#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;

    vector<char> arr(n);

    cout << "Enter the elements (lowercase a-z): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute
    int hash[26] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i] - 'a'] += 1;
    }

    cout << "Enter the number of queries: ";
    int q;
    cin >> q;

    while (q--) {
        cout << "Enter the alphabet: ";
        char alphabet;
        cin >> alphabet;
        alphabet = tolower(alphabet); // optional safety
        cout << hash[alphabet - 'a'] << endl;
    }

    return 0;
}