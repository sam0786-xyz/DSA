#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int p1 = 0;
        int p2 = 0;
        for (p2=0;p2<nums.size();p2++){
            if (nums[p2]==val){
                continue;
            }
            else{
                nums[p1] = nums[p2];
                p1++;
                continue;
            }
        }
        return p1;
    }

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int k = removeElement(nums,val);
    cout<<k<<endl;
    return 0;
}