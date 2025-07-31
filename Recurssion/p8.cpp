//Printing digits of a number using backtracking and checking for armstrong number 
#include<iostream>
using namespace std;
void Print(int n)
{
    if(n == 0) return ;
    Print(n/10);
    cout << n%10 << " ";
}
int main()
{
  int n;
  cout << "Enter the value of n " << endl;
  cin >> n;
  Print(n);
}