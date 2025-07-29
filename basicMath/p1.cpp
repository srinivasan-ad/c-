//Extraction of digits
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void Extract(int n)
{
    while(n > 0)
    {
        int digit = n%10;
        cout << "cur digit -> " << digit << endl;
        n = n/10;
    }
}
int Count(int n)
{
    int count = 0;
    while(n > 0)
    {
       int digit = n%10;
       count++;
       n = n/10;
    }
    cout << "Number of digits in n is -> " << count << endl;
    return count;
}
int  Reverse(int n )
{
    int t = n;
    int num = n%10;
    n = n/10;
    while(n > 0)
    {
        int digit = n%10;
        n = n/10;
        num  = (num*10) + digit;
    }
    cout << "Reverse of " << t << " is -> " << num << endl;
    return num;
}
void Palindrome(int n)
{
 if(n == Reverse(n))
 {
    cout << "Number " << n <<" is a Palindrome !!" << endl;
    return;
 }   
 cout << "NUmber " << n << " is not a palindrome" << endl;
}
int main()
{
    int n;
    cout << "Enter digit " << endl;
   cin >> n;
   Extract(n);
   Count(n);
   Reverse(n );
   Palindrome(n);
}