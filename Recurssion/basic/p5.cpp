//Return the sum of digits of a number 
#include<iostream>
using namespace std;
//Functional recurssion 
int Sum(int n)
{
    if(n == 0 ) return 0;
    return n%10 + Sum(n/10);
}

//Parameterised recurssion
int Sum(int n , int sum)
{
    if(n == 0)
    {
        return sum;
    }
    sum += n%10;
    return Sum(n/10 , sum);
     
}
int main()
{
int n;
cout << "Enter the digit n " << endl;
cin >>  n;
cout << "Sum of the digits of " << n << " using functional recurssion is -> " << Sum(n) << endl;
cout << "Sum of the digits of " << n << " using parameterised recurssion is -> " << Sum(n,0) << endl;
}