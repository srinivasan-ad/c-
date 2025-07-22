#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> s = {"Even" , "Odd"};
    cout << s[n & 1] << endl;
}