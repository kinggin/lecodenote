#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //27.移除元素
       int l=0;
       int r=nums.size()-1;
       while (l<=r)
       {
        while (l<=r&&nums[l]!=val)
        {
            /* code */
            l++;
        }
        while (l<=r&&nums[r]==val)
        {
            /* code */
            r--;
        }

        if(l<r){
            nums[l++]=nums[r--];
        }        
       }

        return l;
    }
};

int main() {
    int arr[]={1};
    vector<int> nums(arr,arr+sizeof(arr)/sizeof(int));
    Solution s;
    int len=s.removeElement(nums,1);
    cout<<len<<endl;
    for (int i = 0; i < len; i++)
    {
        /* code */
        cout<<nums[i]<<endl;
    }
    
    system("pause");

}