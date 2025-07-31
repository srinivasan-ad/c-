//Finding gcd of 2 numbers 
#include<iostream>
using namespace std;
//initial method
int gcd(int a , int b)
{
    if(a == 0 || b == 0)
    {
       return a == 0 ?  b : a; 
    }
    return max(a,b) == a ? gcd(a%b,b) : gcd(a,b%a); 
}
//optimal method
int gcd2(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
  int a;
  int b;
  cout << "Enter the value of a " << endl;
  cin >> a;
  cout << "Enter the value of b" << endl;
  cin >> b;
  if(a <= 0 || b <= 0)
  {
    cout << "Please enter a natural number " << endl;
    return 0;
  }
  if(a == b) 
  {
    cout << "Gcd of " << a << " and " << b << " is -> " << a << endl;
    return 0;
  }
  cout << "Gcd of " << a << " and " << b << " is -> " << gcd(a,b) << endl;
  //Lcm formula is a*b/gcd(a,b);
  cout << "LCM of " << a << " and " << b << " is -> " << (a*b)/gcd2(a,b); 
}