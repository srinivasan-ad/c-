#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string res = "";
    int len = s.length();
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == '$' || s[i] == '*' || s[i] == '#') {
           
            count++;
        } 
        else if (count > 0 && s[i] != ' ') {
            
            count--;
        } 
        else {
      
            res.push_back(s[i]);
        }
    }

    cout << res << endl;
    return 0;
}
