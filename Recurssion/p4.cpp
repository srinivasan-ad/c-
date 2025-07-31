// Checking whether a number is a palindrome or not using recurssion
#include<iostream>
using namespace std;
int reverse(int n , int last)
{ 
      if(n == 0)
      {
     cout << "The reversed number is -> " << last << endl;
     return last ;
      }    
     last = (last * 10) + n%10;
   return  reverse(n/10 , last) ; 
  
}
//Parametric
int Count(int n , int count)
{
    if(n == 0)
    {
        return count;
    }
    return Count(n/10 , ++count);
}

//Functional
int Count(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return 1 + Count(n/10);
}

int main()
{
    int n;
    cout << "Enter the number to reverse " << endl ; 
    cin >> n;
   int rev = reverse(n,0);
   rev == n ? cout << "Number " << n << " is a palindrome !" << endl : cout << "Number " << n << " is not a palindrome" << endl;
   cout << "Number of digits in " << n <<" using Parametric recursion is " << Count(n,0) << endl;
   cout << "Number of digits in " << n <<" using Functional recursion is " << Count(n) << endl;

}
