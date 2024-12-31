#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
    bool wordPattern(string pattern, string s) {
       unordered_map<string,char>Val1;
       unordered_map<char,string>Val2;
        int flag = 0;
        string a ;
       for(int i = 0 ; i <= s.size() ; i++)
       {
         if( s[i] == ' ' || i == s.size())
        {
            if(flag > pattern.size()){
                return false;
            }
                if((Val1.count(a) && Val1[a] != pattern[flag] )|| (Val2.count(pattern[flag]) && Val2[pattern[flag]] != a)) 
   {
    return false;
       }
            Val1[a] = pattern[flag];
            Val2[pattern[flag]] = a;
            a = "";
            flag++;
        }
        else{
         a += s[i];
          }
            }
            if(flag != pattern.size())
            {
                return false;
            }
      
return true;

    }
int main()
{
    bool result;
    string pattern;
    string sentence;
    std::cout << "Enter pattern string : " <<endl ;
    std::cin >> pattern;
    cin.ignore();
    std::cout << "Enter sentence string : " <<endl ;
    getline(cin, sentence);
    result = wordPattern(pattern,sentence);
    std::cout<< "Result is : " << (result ? "True" : "False" ) <<  endl;
}