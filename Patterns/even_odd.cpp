#include <iostream>
int main()
{
    int next_even = 2;
    int next_odd = 1;
    int n = 5;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
           if(i%2 != 0)
           {
            std :: cout << next_odd << " ";
            next_odd += 2;
           }
           else{
              std :: cout << next_even << " ";
            next_even += 2;
           }
        }
        std::cout<<""<<std::endl;
    }
}