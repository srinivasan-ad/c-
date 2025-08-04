//Pascals triangle apparently this is dp but i did it anyway lol i was shocked to get the solution 
//          1
//        1   1
//       1  2  1
//     1   3  3  1
//   1   4   6  4  1
//   ....
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> Pascal(int n)
{
    vector<vector<int>> mat(n);
    mat[0] = {1};
    mat[1] = {1,1};
    if(n == 1) return {{1}};
    if(n == 2) return {{1},{1,1}};
    for(int i = 2 ; i < n ; i++)
    {
        mat[i].push_back(1);
        for(int j = 1 ; j < i ; j++)
        {
            int sum = mat[i-1][j] + mat[i-1][j-1];
            mat[i].push_back(sum);
        }
        mat[i].push_back(1);
    }
    return mat;
}
void Print(vector<vector<int>>& mat)
{
    for(int i = 0  ; i < mat.size() ; i++)
    {
        for(int j = 0 ; j  <mat[i].size() ; j++)
        {

            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
  vector<vector<int>> matrix;
  matrix = Pascal(6);
  Print(matrix);
}