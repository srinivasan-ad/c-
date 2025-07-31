//Parametric and functional recurssion
#include<iostream>
using namespace std;

//Parametric recurssion
void Sum(int sum , int n )
{
    if(n < 1) 
    {
     
        cout << "Sum is -> " << sum << endl;
        return;
    }
    sum += n;  
    Sum(sum , n - 1 );
}

//Funtional
int Sum(int n)
{
    if(n < 1) return 0;
    return n + Sum(n - 1);
}

int main()
{
  int n;
  cout << "Enter the end range value " << endl;
  cin >> n;
  Sum(0 , n );
  cout << "Sum using Functional recurssion is -> " << Sum(n) << endl;
}