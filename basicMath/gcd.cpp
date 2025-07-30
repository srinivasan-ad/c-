//Finding Gcd just compare the divisors
#include<iostream>
using namespace std;
void Gcd(int a , int b)
{
    int maxi = 1;
    int temp1 = a;
    int temp2 = b;
    a > b ? a = a-b : b = b-a;
    for(int i = 1 ; i <= min(a,b) ; i++)
    {
       if((a%i == 0 && b % i == 0))
       {
        maxi = max(maxi , i);
       
       }
    }
    cout << "Gcd of " << temp1 << " and " << temp2 << " is " << maxi << endl;
}

void Euclidean(int a , int b )
{
  int temp1 = a;
  int temp2 = b;
   while(a > 0 && b > 0)
   {
      if(a > b)
        a = a % b;
      else
        b = b % a;
   }
   a > 0 ? cout << "GCD of " << temp1 << " and " << temp2 << " is -> " << a << endl : cout << "GCD of " << temp1 << " and " << temp2 << " is -> "<< endl << b;

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
  Euclidean(a,b);
}