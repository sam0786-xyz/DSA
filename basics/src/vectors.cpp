#include<iostream>
#include<vector>
using namespace std;

/*🔹 1. Vector
	•	Dynamic array that can resize itself.
*/

int main(){
    vector<int> v = {1, 2, 3};
    v.push_back(4);              // {1,2,3,4}
    v.emplace_back(5);           // {1,2,3,4,5}
    v.emplace(v.end() - 2, 7);   // Insert 7 before 4 → {1,2,3,7,4,5}
    v.insert(v.begin(), 0);      // {0,1,2,3,7,4,5}
    v.pop_back();                // Remove last element → {0,1,2,3,7,4}
    v.erase(v.begin() + 4);      // Remove element at index 4 → {0,1,2,3,4}
    cout << "The total size is " << v.size() << "\n";
    for (auto it = v.rbegin(); it != v.rend(); ++it)
        cout << *it << " "; // elements at the address
        //cout << &it << " "; //address of each element 


/*

v.size() - Returns the number of elements
v.capacity() - Returns current allocated storage
v.empty() - Returns true if vector is empty
v.resize(n) - Resizes vector to contain n elements
v.shrink_to_fit() - Reduces capacity to fit size
v.reserve(n) - Reserves space for n elements
v[i] - Access element at index i
v.at(i) - Safe access with bounds checking
v.front() - First element
v.back() - Last element
v.data() - Pointer to underlying array
v.push_back(x) - Adds element x at the end
v.pop_back() - Removes last element
v.insert(pos, val) - Inserts val at iterator pos
v.insert(pos, n, val) - Inserts val n times at pos
v.erase(pos)- Erases element at pos
v.erase(start, end) - Erases range [start, end)
v.clear() - Removes all elements
v.assign(n, val) - Replaces content with n copies of val
v.swap(v2) - Swaps contents with another vector
v.emplace_back(x) - Constructs element at end (faster)
v.emplace(pos, args...) - Constructs in-place at pos
v.begin() - Iterator to beginning
v.end() - Iterator to end (1 past last element)
v.rbegin() - Reverse iterator to last element
v.rend() - Reverse iterator to before first
v.cbegin() - Constant iterator to beginning
v.cend() - Constant iterator to end

*/

}