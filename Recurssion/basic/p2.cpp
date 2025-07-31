//Printing linearly n numbers
#include<iostream>
using namespace std;
void PrintNum(int n , int count)
{  
    cout << count << " ";
    if(count == n) return;
    PrintNum(n ,++count);
}
void Nto1(int n)
{
    cout << n << " ";
    if(n == 1) return;
    Nto1(--n);
}

void Noinc(int count , int n)
{
    if(count < 1) return;
    Noinc(count-1,n);
    cout << count << " ";
}
void Back(int count , int n)
{
    if(count > n) return;
    Back(count+1,n);
    cout << count << " ";
}
int main()
{
   int n;
   cout << "Enter the value of n" << endl;
   cin >> n;
   if(n <= 0)
   {
    cout << "Invalid input" << endl;
    return 0;
   }
   PrintNum(n,1);
   cout << endl;
   Nto1(n);
   cout << endl;
   Noinc(n,n);
   cout << endl;
   Back(1,n);
   cout << endl;
   return 0;
}