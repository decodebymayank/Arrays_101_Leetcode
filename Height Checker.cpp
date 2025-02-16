#include<bits/stdc++.h>
using namespace std;

int heightChecker(vector<int>& heights) {
    vector<int> tempvec(heights) ;
    
    sort(tempvec.begin(),tempvec.end()) ;
    
    int count = 0 ;
    
    for(int i = 0 ; i < heights.size() ; i++)
    {
        if(heights[i]!=tempvec[i])
        {
            count++;
        }
    }
    
    return count ;
}

int main()
{
    vector<int> heights{} ;
    int result = heightChecker(heights) ;
    cout << result << endl;
}