//Product of digits of a number
#include <iostream>
using namespace std;
//Using functional 
int Prod(int n)
{
   if(n == 0)
   {
    return 1;
   }
   return n%10 * Prod(n/10);
}
int Prod(int n , int prod)
{
   if(n == 0)
   {
    return prod;
   }
   prod  = prod * (n%10);
   return Prod(n/10 , prod);
}
int main()
{
  int n;
  cout << "Enter the value of n " << endl;
  cin >> n;
  if(n == 0) {
    cout << "The product is -> 0" << endl;
    return 0;
}
  cout << "The product of the digits of " << n << " using functional recurssion is -> " << Prod(n) << endl;
  cout << "The product of the digits of " << n << " using parameterised recurssion is -> " << Prod(n , 1) << endl;
  
}