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
//Search
// Type 1
std::cout << Val["Hello"] << endl;
// Type 2
std:: cout<< Val.at("Namaste") << endl;
 /*While searching a non-existent value in the hash if we use st function exception occurs instead 
 if we directly acces it the value is inserted hash and by default correspods to zero */
 std:: cout<<Val["non-existent"] <<endl;
 std:: cout<<Val.at("non-existent") <<endl;
 //Count function returns 1 if key exists in map else returns 0
 std:: cout<< Val.count("Champ") <<endl ;
 std:: cout<< Val.count("Wow") <<endl;
 //Size function is used to find the size or length of the map
 std:: cout<< Val.size() <<endl; 
 //Erase function is used to delete a key value pair from the map
 std:: cout<< Val.erase("Hello") <<endl;
  std:: cout<< Val.erase("non-existent") <<endl;
  std:: cout<< Val.size() <<endl; 
  //iterate over the map
  for(auto i:Val){
    std:: cout<< i.first + ":" << i.second <<endl ;
  }
  //Using iterator
  unordered_map<string,int> :: iterator itr = Val.begin();
  while(itr != Val.end())
  {
    std :: cout<< itr->first + "" << itr->second <<endl ;
    itr++;
  }
  //Find returns a pointer pointing to the requested key
  auto it = Val.find("Champ");
  std:: cout << it->first + ":" << it->second <<endl;
  //Extract function extracts a pair form the map which can be inserted in a new map
  unordered_map<string,int> Val2 ;
  auto extr_pair = Val.extract("Namaste");
  Val2[extr_pair.key()] = extr_pair.mapped();
   for(auto i:Val2){
    std:: cout<< i.first + ":" << i.second <<endl ;
  }

}