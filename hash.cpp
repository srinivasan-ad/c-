#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
//Creating an unordered map
unordered_map<string,int>Val;
//Creating pairs for insertion 
//Type 1
pair<string,int> p1 = make_pair("Hello",2);
Val.insert(p1);
// Type 2
pair<string,int> p2("Namaste",4);
Val.insert(p2);
//Type 3
Val["Champ"] = 1;
}