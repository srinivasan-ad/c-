//Print all divisors
#include<iostream>
using namespace std;
void Divisors(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

}

void Divisors2(int n)
{
     for(int i = 1 ; i*i <= n ; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
            if(i != n/i)
                cout << n/i << " ";
        }
    }
    cout << endl;
}
void isPrime(int n)
{
    int count = 0;
       if (n <= 1) {
        cout << n << " is not a prime number" << endl;
        return;
    }
    for(int i = 2 ; i * i <= n ; i++)
    {
        if(n%i == 0)
        {   if (n <= 1) {
        cout << n << " is not a prime number" << endl;
        return;
    }
        count ++;
        }
        if(count > 0)
        { 
            cout  << n << " is not a prime number" << endl;
            return;
        }
        }
cout << n << " is a prime number !!" << endl ;
}

int main()
{
    int n;
    cout << "Enter number for finding divisors" << endl;
    cin  >> n ;
    Divisors2(n);
    isPrime(n);
    return 0;
}