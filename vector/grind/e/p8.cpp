//Unoion of 2 sorted arrays
#include<iostream>
#include<vector>
using namespace std;
vector<int> Union(vector<int>& a, vector<int>& b) {
    vector<int> res;
    int i = 0, j = 0;
    if(a.empty() && !b.empty()) return b;
    if(b.empty() && !a.empty()) return a;
    if(a.empty() && b.empty()) return {-1}; 
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
            i++;
        } else if (a[i] > b[j]) {
            if (res.empty() || res.back() != b[j]) res.push_back(b[j]);
            j++;
        } else {
            if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
            i++;
            j++;
        }
    }
    while (i < a.size()) {
        if (res.empty() || res.back() != a[i]) res.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        if (res.empty() || res.back() != b[j]) res.push_back(b[j]);
        j++;
    }

    return res;
}

vector<int> Intersection(vector<int>& a , vector<int>& b)
{
  int i = 0;
  int j = 0;
 if(a.empty() || b.empty()) return {-1};
  vector<int> res;
  while(i != a.size() && j != b.size())
  {
      if(a[i] < b[j])
      {
        i++;
      }
      else if(a[i] > b[j])
      {
        j++;
      }
      else
      {
        res.push_back(a[i]);
        i++;
        j++;
      }
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
   vector<int> a = {1,2,2};
   vector<int> b = {};
   vector<int> temp1 = Union(a,b);
   vector<int> temp2 = Intersection(a,b);
   Print(temp1);
   cout << endl;
   Print(temp2);
}