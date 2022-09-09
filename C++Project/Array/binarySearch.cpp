#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        //左闭右闭 [l,r]

        int l=0;
        int r=nums.size()-1;
        if(target<nums[l]||target>nums[r]){
            return -1;
        }
        int mid;
        while (l<=r)
        {
            /* code */
            mid=(l+r)>>1;
            if(target>nums[mid]){
                l=mid+1;
            }else if(target<nums[mid]){
                r=mid-1;
            }else{
                break;
            }
        } 
        if(l>r){
            return -1;
        }
        
        while (nums[mid]==target)
        {
            /* code */
            if(mid!=0){
            mid--;
            }else{
                return 0;
            }
        }

        return mid+1;

    }
};

int main() {
    int arr[]={1,5};
    vector<int> nums(arr,arr+sizeof(arr)/sizeof(int));
    Solution solution;
    cout<<solution.search(nums,5);
    system("pause");
}