//Armstrong number is a number whose sums of cubes of digits is the number itself
#include<iostream>
using namespace std;
bool isArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    while(n > 0)
    {
        int digit = n%10;
        sum += digit*digit*digit;
        n = n/10;
    }
    return sum == temp;
}
int main()
{
    int n;
    cout << " Enter a number to check" << endl;
    cin >> n;
  if(isArmstrong(n))
  {
    cout << "Number " << n << " is Armstrong number!" << endl;
    return 0;
  }
  cout << "Number " << n << " is not Armstrong Number" << endl;
  return 0;
}