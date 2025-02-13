#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
	int orgsize = nums.size() ;
	vector<int> ans ;
	for(int i = 0 ; i < orgsize ; i++)
	{
		if(nums[i] != val)
		{
			ans.push_back(nums[i]);
		}
	}

	nums.clear() ;
	nums = ans ;
	
	return ans.size() ;
}

int main()
{
    vector<int> nums{0,1,2,2,3,0,4,2};
    int result = removeElement(nums,2) ;
    cout << result << endl;
}