#include<bits/stdc++.h>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    vector<int> result ;
    
    int i = 0 ;
    
    while( i < arr.size())
    {
        if(i!=arr.size()-1)
        {
             int j = i + 1 ;
            int no = -1 ;
            while(j < arr.size())
            {
                no = max(no , arr[j]) ;
                j++;
            }

            result.push_back(no) ;
            i++;
        }
        else
        {
            result.push_back(-1) ;
            break;
        }
       
        
    }
    
    return result;
    
}

int main()
{
    vector<int> arr{17,18,5,4,6,1} ;
    vector<int> result = replaceElements(arr);
    
}