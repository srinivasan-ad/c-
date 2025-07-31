//Check if a number is prime or not
#include<iostream>
using namespace std;
bool isPrime(int n , int start)
{
    
    if (start * start > n)
            return true;
     if (n % start == 0)
        return false;
    return isPrime(n , start + 1);


}
int main()
{
    int n;
    cout << "Return the value to check for prime " << endl;
    cin >> n;
    if(n <= 1 || !isPrime(n,2))
    {
        cout << n << " is not a prime number " << endl;
    }
    else
    {
        cout << n <<  " is a prime number !" << endl;
    }
    return 0;
}