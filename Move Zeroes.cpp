#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
	int i = 0 ;
	
	
	while(i < nums.size())
	{
		if(nums[i] == 0)
		{
            int j = i+1 ;
			while(j < nums.size())
			{
				if(nums[j]!=0)
				{
					swap(nums[i],nums[j]) ;
					j++;
					break;
				   
				}
				else
				{
					j++;
				}
				 
			}
		}
		i++;
	}
}

int main()
{
    vector<int> nums{0,1,0,3,12};
    moveZeroes(nums);
}