#include <iostream>
void triangle(int n)
{
     for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            std:: cout<< "*";
        }
        std :: cout << std :: endl;
    }
}
void triangle2(int n)
{
     for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            std:: cout<< i;
        }
        std :: cout << std :: endl;
    }
}
void revTriangle(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = i ; j >= 1 ; j--)
        {
            std:: cout<< j << " ";
        }
        std :: cout << std :: endl;
    }

}
void floydTriangle(int n)
{
    int nums = 1 ;
     for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            std:: cout<< nums << " ";
            nums++;
        }
        std :: cout << std :: endl;
    }
}
void invertedTriangle(int n)
{
    int num = 1;
    for(int i = n ; i > 0 ; i--)
    {
        for(int j = 0 ; j < i ; j++)
        {
            std :: cout << num << " ";
        }
        num++;
        std :: cout << std :: endl ;
    }
}
int main()
{
    int n;
    std :: cout << "Enter the val ->" << std:: endl ;
    std :: cin >> n ;
    triangle(n);
    triangle2(n);
    revTriangle(n);
    floydTriangle(n);
   invertedTriangle(n);
}