//Printing digits of a number using backtracking and checking for armstrong number 
#include<iostream>
using namespace std;
void Print(int n)
{
    if(n == 0) return ;
    Print(n/10);
    cout << n%10 << " ";
}

int Armstrong(int n)
{
    if(n == 0) return 0;
    int last = n%10;
    return last*last*last + Armstrong(n/10);
}
int main()
{
  int n;
  cout << "Enter the value of n " << endl;
  cin >> n;
  Print(n);
  cout << endl;
  if(n == Armstrong(n)) 
  {
    cout << n << " is an Armstrong number !" << endl;
    return 0;
  }
  cout << n << " is not an Armstring number " << endl;
}