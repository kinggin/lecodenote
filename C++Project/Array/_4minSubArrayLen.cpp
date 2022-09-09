#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //滑动窗口
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;//窗口起始点
        int sum=0;
        int len=INT32_MAX;
        int tlen=0;
        for (int j = 0; j <nums.size(); j++)
        {
            /* code */
            sum+=nums[j];
            while (sum>=target)
            {//满足条件就进行收缩
                /* code */
                tlen=j-i+1;
                len=min(tlen,len);
                sum-=nums[i++];
            }
            
        }
            
        if(len==INT32_MAX){
            return 0;
        }
        return len;
    }
    
    
    
    
    
    
    
    
    
    //暴力解法  O(n2)

    int minSubArrayLen1(int target, vector<int>& nums) {
        
        int len=INT32_MAX;
        int tlen=0;
        for (int i = 0; i < nums.size(); i++)
        {
            /* code */
            int sum=0;
            for (int j = i; j < nums.size();j++)
            {
                /* code */
                sum+=nums[j];
                if(sum>=target){
                    tlen=j-i+1;
                    len=len<tlen?len:tlen;
                    break;
                }

            }

            

        }
        if(len==INT32_MAX){
            return 0;
        }
        return len;
        
    }
};

int main() {




    system("pause");
    return 0;
}