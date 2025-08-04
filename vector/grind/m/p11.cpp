//Rotate the matrix by 90* -> make transpose by swappping ij with ji then reverse i (my trick)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<vector<int>>& mat)
{
    for(int i = 0 ; i < mat.size() ; i++)
    {
        for(int j = i ; j < mat[0].size() ; j++)
        {
            if( i != j) swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i = 0 ; i < mat.size() ; i++)
    {
        reverse(mat[i].begin() , mat[i].end());
    }
}

void Print(vector<vector<int>>& mat)
{
    for(int i = 0  ; i < mat.size() ; i++)
    {
        for(int j = 0 ; j  <mat[0].size() ; j++)
        {

            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
   vector<vector<int>> mat = {
    { 1,  2,  3,  4},
    { 5,  6,  7,  8},
    { 9, 10, 11, 12},
    {13, 14, 15, 16}
};
rotate(mat);
Print(mat);
}
