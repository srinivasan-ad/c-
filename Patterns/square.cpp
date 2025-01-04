#include <iostream>
int main()
{
    int n ; 
    std :: cout << "Enter val of n ->" << std:: endl ;
    std :: cin >> n ;
    for(int i = 1 ; i <= n ; i ++ )
    {
        std :: cout << i ;
        if(i%3 == 0)
        {
            std :: cout << std:: endl;
        }
      
    }

}