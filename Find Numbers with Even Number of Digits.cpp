#include<bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) {
    vector<int> tempvec ;
    
    for(int i = 0 ; i < nums.size() ; i++)
    {
       
        
        string s = to_string(nums[i]) ;
        
        int stlength = s.length() ;
        
        if(stlength%2 == 0)
        {
            tempvec.push_back(stlength) ;
        }
    }
    
    return tempvec.size() ;
}

int main()
{
    vector<int> nums{12,345,2,6,7896};
    int result = findNumbers(nums);
    cout << result << endl;
}