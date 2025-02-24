#include<bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
    vector<int> finalarray;
 
    
    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(nums[i]%2==0 || nums[i]==0)
        {
            finalarray.push_back(nums[i]);
        }
    }
    
     for(int i = 0 ; i < nums.size() ; i++)
    {
        if(nums[i]%2!=0)
        {
            finalarray.push_back(nums[i]);
        }
    }
    
    
    
    return finalarray;
}

int main()
{
    vector<int> arr{3,1,2,4};
    vector<int> res = sortArrayByParity(arr);

}