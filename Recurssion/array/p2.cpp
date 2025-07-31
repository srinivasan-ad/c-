//To check if a given string is a palindrome or not 
#include<iostream>
#include<string>
using namespace std;
//word check
bool isPalindrome(string s , int p)
{
   if(p >= s.size()-p-1) return true;
   if(towlower(s[p]) != tolower(s[s.size()-p-1])) return false;
   return isPalindrome(s,p+1);
}

//sentence check 
bool isPallindrome(string s , int l , int r)
{
   if(l >= r) return true;
   if(s[l] == ' ')
   {
     return isPallindrome(s,l+1,r);
   }
   if(s[r] == ' ')
   {
    return isPallindrome(s,l,r-1);
   }
   if(tolower(s[l]) != tolower(s[r])) return false;
   return isPallindrome(s,l+1,r-1);
}
int main()
{
   string s ;
   cout << "Enter the string to check for pallindrome " << endl;
   getline(cin ,s);
   isPallindrome(s,0,s.size()-1) ? cout << s << " is a pallindrome !" << endl : cout << s << " is not a pallindrome" << endl;
}