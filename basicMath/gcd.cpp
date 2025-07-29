//Finding Gcd just compare the divisors
#include<iostream>
using namespace std;
void Gcd(int a , int b)
{
    int maxi = 1;
    a > b ? a = a-b : b = b-a;
    for(int i = 1 ; i <= min(a,b) ; i++)
    {
       if((a%i == 0 && b % i == 0))
       {
        maxi = max(maxi , i);
       
       }
    }
    cout << "Gcd of " << a << " and " << b << " is " << maxi << endl;
}
int main()
{
  int a;
  int b;
  cout << "Enter the value of a " << endl;
  cin >> a;
  cout << "Enter the value of b " << endl;
  cin >> b;
  Gcd(a,b);
}