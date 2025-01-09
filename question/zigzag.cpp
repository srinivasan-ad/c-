#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s = "PAYPALISHIRING"; 
    int numRows = 3;            

    if (numRows == 1 || s.size() <= numRows) {
        cout << s << endl;
        return 0;
    }

    vector<string> Vals(numRows);
    int cur = 0;
    bool down = false;
    string res;

    for (char c : s) {
        Vals[cur] += c;
        if (cur == 0 || cur == numRows - 1)
            down = !down;
        cur += down ? 1 : -1;
    }

    for (string it : Vals)
        res += it;

    cout << res << endl; 
    return 0;
}
