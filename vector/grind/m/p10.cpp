//Set matrix zero -> make all rows and columns with zero present to zero 
#include<iostream>
#include<vector>
using namespace std;
void Set(vector<vector<int>>& mat)
{
    int count = -1 ;
     for(int i = 0 ; i  < mat.size() ; i++)
     {
        for(int j = 0 ; j  < mat[0].size() ; j++)
        {
            if(mat[i][j] == 0 )  
            {
               if(j == 0) 
               {
                  count = 0;
               }
               else
               {
                mat[i][0] = 0;
                mat[0][j] = 0;
               }
            } 
        }
     }
     cout << "Val of count -> " << count <<endl;
     for(int i = 1 ; i < mat.size() ; i++)
     {
        for(int j = 1 ; j < mat[0].size() ; j++)
        {
            if(mat[i][0] == 0 || mat[0][j] == 0) 
            mat[i][j] = 0;
        }
     }

     for(int j = 1 ; j  < mat[0].size() ; j++)
     {
        if(mat[0][0] == 0) mat[0][j] = 0;
     }
     for(int i = 0 ; i < mat.size() ; i++)
     {
        if(count == 0) mat[i][0] = 0;
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
    {1, 2, 3, 4},
    {5, 0, 7, 8},
    {0, 10, 11, 12},
    {13, 14, 15, 0}
};
Set(mat);
Print(mat);
}