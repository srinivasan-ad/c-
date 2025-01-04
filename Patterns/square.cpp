#include <iostream>
void squareInt(int n)
{
    int num = 1;
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
void squareChar(int n)
{
char alpha = 'A';
    for(int i = 1 ; i <= n*n ; i ++ )
    {
        std :: cout << alpha << " " ;
        alpha++;
        if(i%n == 0)
        {
            std :: cout << std:: endl;
        }
      
    }
}
int main()
{
    int n ; 
    int num = 1;
    std :: cout << "Enter val of n ->" << std:: endl ;
    std :: cin >> n ;
  squareInt(n);
  squareChar(n);

}
