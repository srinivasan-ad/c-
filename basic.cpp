#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i = 0;
    float j  =  0.0 ;
    double k = 0.00;
    long l = 0;
    char c = 'a';
    std :: string s = "acBbed";
    array<int,4> arr;
    vector<int> vec;
    vec[4] = 5;
    cout << vec[4] << endl;
    vec.push_back(7);
    vec.push_back(6);
    vec.push_back(10);
    vec.push_back(9);
    cout << vec[0]<<endl;
    for(int i = 0 ; i < vec.size() ; i++)
    {
        cout << vec[i] << endl;
    }
    for(auto num : vec)
    {
        cout << num << endl;
    }
    vec.pop_back();
    for(auto num : vec)
    {
        cout << num << endl;
    }
    cout << "sorted series : ";
    sort(vec.begin() , vec.end());
    for(auto num : vec)
    {
        cout << num << endl;
    }
    cout << "reverse series : " ;
    reverse(vec.begin()+1 , vec.end()-1);
    for(auto num : vec)
    {
        cout << num << endl;
    }
   sort(s.begin(),s.end());
   for(auto c : s)
    {
        cout << c << endl;
    }
     int num = 60 - '0';
     cout << num << endl;
     vector<vector<int>> vec2(1);
     vec2.push_back(vec);
     vec.push_back(9);
     vec2.push_back(vec);
     vec2.push_back({1,2,3,4});
    vec2[0] = {7,8,9,10};
     for(int i = 0 ; i < vec2.size() ; i++)
     {
        for(int j = 0 ; j < vec2[i].size() ; j++)
        {
              cout << vec2[i][j] ;
        }
              cout << "" <<endl;
     }
}