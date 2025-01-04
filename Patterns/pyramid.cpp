#include <iostream>
void pyramid(int n)
{
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ; j <= n-i-1 ; j++)
        {
            std :: cout<< " " ;
        }
        for(int j = 1 ; j <= i+1 ; j++)
        {
            std :: cout << j ;
        }
        for(int j = i; j>0 ; j--)
        {
            std :: cout << j ;
        }
        std :: cout << std :: endl;
    }
}
int main()
{
int n ;
std :: cout << "Enter val of n -> " << std :: endl ;
std :: cin >> n ;
pyramid(n);
}