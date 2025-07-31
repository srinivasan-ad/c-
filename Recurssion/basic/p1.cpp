//Print name n times
#include<iostream>
#include<string>
using namespace std;

void PrintName(string s , int n)
{
    cout << "Printing name -> " << n << ") " << s << endl;
    if(n == 1) return;
    PrintName(s,n-1)  ;
}
int main()
{
    string s;
    int n;
    cout << "Enter the number repititions " << endl;
    cin >> n;
    cout << "Enter the string to be repeated " << endl;
    cin >> s;
    PrintName(s,n);
    return 0;
}