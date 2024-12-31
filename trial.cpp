#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
unordered_map<char,int> Val ;
string input;
int max = 0;
char max_key ;
std:: cin >> input;
for(int i = 0 ; i < input.size() ; i++)
{
    Val[input[i]]++;
    if(Val[input[i]] > max)
    {
        max = Val[input[i]];
        max_key = input[i];
    }
}
std :: cout<< max_key << ":" << max <<endl;


}