#include <iostream>
#include <string>
#include <math.h>
using namespace std ;
void Hello( string champ){
    std:: cout<< "Hello " + champ; 
    

}
int main()
{
    Hello("champ");
    int n = 19;
    int num1 = n / 10;
    int num2 = n - num1*10; 
     std:: cout<< "n1 is : " << num1 <<endl; 
      std:: cout<< "n2 is : " << num2 <<endl; 
        std:: cout<< "res is : " << pow(num1,2) + pow(num2,2) <<endl; 
     
}
