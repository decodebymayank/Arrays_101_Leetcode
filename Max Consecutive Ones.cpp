#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    vector<int> tempvec ;
    int maxcount = 0;
    int i = 0 ;
    for(; i < nums.size() ; i++)
    {
        if(nums[i]==1)
        {
            tempvec.push_back(nums[i]);
        }
        else
        {
            maxcount = (maxcount > tempvec.size()) ? maxcount : tempvec.size();
            tempvec.clear();
        }
    }
    
    if(nums[i-1]==1)
    {
        maxcount = (maxcount > tempvec.size()) ? maxcount : tempvec.size();
        
    }
    
    return maxcount;
}

int main()
{
    vector<int> nums{1,0,1,1,0,1};
    int result = findMaxConsecutiveOnes(nums);
    cout << result << endl;
}
