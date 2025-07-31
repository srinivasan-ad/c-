//Fibonacci series to show multip recurssion
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
int main()
{
 int n;
 cout << "Enter the value of n" << endl;
 cin >> n;
 cout << "Fibonacci value of term " << n << " is -> " << fib(n) << endl; 
}