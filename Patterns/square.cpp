#include <iostream>
int main()
{
    int n ; 
    int num = 1;
    std :: cout << "Enter val of n ->" << std:: endl ;
    std :: cin >> n ;
    for(int i = 1 ; i <= n*n ; i ++ )
    {
        std :: cout << num << " " ;
        num++;
        if(i%n == 0)
        {
            std :: cout << std:: endl;
        }
      
    }

}