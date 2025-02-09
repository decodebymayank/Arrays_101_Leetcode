#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> temp(nums1) ;
    nums1.clear();
    for(int i = 0 ; i < m  ; i++)
    {
        nums1.push_back(temp[i]) ;
    }
    
    for(int i = 0 ; i < n  ; i++)
    {
        nums1.push_back(nums2[i]) ;
    }
    
    sort(nums1.begin(),nums1.end()) ;
    
   
    
}

int main()
{
    vector<int> nums1{1,2,3,0,0,0};
    int m = 3 ;
    vector<int> nums2{2,5,6};
    int n = 3;

    merge(nums1,m,nums2,n);
    
}
