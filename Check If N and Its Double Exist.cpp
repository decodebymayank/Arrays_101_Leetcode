#include<bits/stdc++.h>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    bool value = false ;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        
            int j = 0 ;
            
            while(j < arr.size())
            {
                if(i!=j)
                {
                    if(arr[i] == arr[j] * 2)
                    {
                        return true ;
                    }
                }
                
                j++;
            }
        
    }
    
    return value ;
}

int main()
{
    vector<int> v{-10,12,-20,-8,15};
    bool value = checkIfExist(v);
    cout << value << endl;
}