#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    vector<vector<int>> mat = {{1, 1, 0}, 
                             {1, 0, 0}, 
                             {1, 1, 1}};
    unordered_map<int,int> mp;
    int temp = 0;
    int fin;
    int one = 0;
    for(int i = 0 ; i < mat.size(); i++)
    {
        for(int j = 0 ; j < mat.size() ; j++)
        {
            if(mat[i][j] == 1)
            {
                mp[j]++;
            }
        }
    }
    for(auto&  [num , count] : mp)
    {
         if(count == mat.size())
         {
            temp++;
            fin = num;
         }
    }
    
    if(temp == 1)
    {
        for(int i = 0 ; i < mat.size() ; i++)
        {
           if(mat[fin][i] == 1)
           {
            one++;
           }
        }
    }
    if(one == 1)
    {

    cout << "Celebrity is -> " << fin << endl;
}
    else{
        cout << "Celebrity not present" << endl;
    }

    return 0;
}