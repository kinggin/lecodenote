#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
        //暴力解法：快排加平方
    vector<int> sortedSquares1(vector<int>& nums) {
      for(int i=0;i<nums.size();i++){
          nums[i]=nums[i]*nums[i];
      }
      quickSort(nums,0,nums.size()-1);
      return nums;
    }
    //双指针解法
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1,k;
        k=r;
        vector<int> res(nums.size(),0);
        for (int i = 0; i < nums.size(); i++)
        {
           if(nums[l]*nums[l]<nums[r]*nums[r]){
            res[k]=nums[r]*nums[r];
            l--;
            k--;
           }else{
            res[k]=nums[l]*nums[l];
            r++;
            k--;
           }
        }
        return res;
    
    }

    void quickSort(vector<int>& nums,int l,int r){
        if(l>=r){
            return;
        }
        int ll=l;
        int rr=r;
        int mid=nums[l];
        while(ll<rr){

            while(ll<rr&&nums[rr]>=mid){
               rr--;
            }
            while(ll<rr&&nums[ll]<=mid){
                ll++;
            }
            if(ll<rr){
                int t=nums[ll];
                nums[ll]=nums[rr];
                nums[rr]=t;
            }
        }
        nums[l]=nums[rr];
        nums[rr]=mid;
        quickSort(nums,l,ll-1);
        quickSort(nums,ll+1,r);
        
    }
};

int main() {
    int arr[]={9,8,7,6,5,4,3,2,1};
    vector<int> nums(arr,arr+sizeof(arr)/sizeof(int));
    Solution s;
    s.quickSort(nums,0,nums.size()-1);
    for (int i = 0; i < nums.size(); i++)
    {
        /* code */
        cout<<nums[i]<<"<";
    }
    system("pause");
    return 0;
}
