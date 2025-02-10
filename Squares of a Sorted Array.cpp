#include<bits/stdc++.h>
using namespace std;

 vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result ;
        
        for(int i = 0 ; i < nums.size() ; i++)
        {
            result.push_back(nums[i] * nums[i]) ;
        }
        
        sort(result.begin(), result.end()) ;
        
        return result ;
    }

int main()
{
    vector<int> nums{-7,-3,2,3,11};
    vector<int> result = sortedSquares(nums);
    
}
