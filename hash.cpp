#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
unordered_map<string,int>Val;
pair<string,int> p1 = make_pair("Hello",2);
Val.insert(p1);
}