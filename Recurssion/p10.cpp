//Converting integer to binary 
#include<iostream>
#include<cmath>
using namespace std;
void binary(int n) {
    if (n == 0) return;       
    binary(n / 2);            
    cout << n % 2 ;            
}
int binary(int n, int count ) {
    if (n == 0)
        return 0;
    return binary(n / 2, count + 1) + (n % 2) * pow(10, count);
}
int main()
{
 int n;
 cout << "Enter the value of n " << endl;
 cin >> n;
 cout << "Binary value of " << n << " is -> "  << endl;
 binary(n);
 cout <<endl;
cout << "Binary as integer: " << binary(n,0) << endl;
}