//Spiral matrix
#include<iostream>
#include<vector>
using namespace std;
int right(vector<vector<int>>& mat ,vector<int>& res, int u ,  int l , int r )
{
   for(int i = l ; i <= r ; i++)
   {
       res.push_back(mat[u][i]);
   }
  return u+1;
}
int down(vector<vector<int>>& mat , vector<int>& res, int u , int r , int b)
{
     for(int i = u ; i <= b ; i++)
   {
       res.push_back(mat[i][r]);
   }
   return r-1;
}
int left(vector<vector<int>>& mat , vector<int>& res, int b , int r , int l)
{
    for(int i = r ; i >= l ; i--)
   {
       res.push_back(mat[b][i]);
   }
   return b-1;
}
int up(vector<vector<int>>& mat , vector<int>& res, int u , int b , int l)
{
     for(int i = b ; i >= u ; i--)
   {
       res.push_back(mat[i][l]);
   }
  return l+1;
}

vector<int> spiral(vector<vector<int>> mat)
{
   int u = 0;
   int b = mat.size()-1;
   int l = 0;
   int r = mat[0].size()-1;
   vector<int> res;
   while(l <= r && u <= b)
   {
     u = right(mat, res, u, l, r);
        if (u > b) break;

        r = down(mat, res, u, r, b);
        if (l > r) break;

        b = left(mat, res, b, r, l);
        if (u > b) break;

        l = up(mat, res, u, b, l);
   }
   return res;
}
void Print(vector<int>& arr)
{
    for(int i = 0  ; i < arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
   vector<vector<int>> mat = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
vector<int> res = spiral(mat);
Print(res);
}