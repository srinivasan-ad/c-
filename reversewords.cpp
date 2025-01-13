#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "  hello world  "; 
    string k;
    int charac = 0;
    int flag = 0;
    int start = 0;
    int words = 0;

    for (char it : s) {
        if (it == ' ') {
            flag++;
        } else {
            charac++;
            flag = 0;
        }

        if (charac >= flag && flag <= 1) {
            k.push_back(it);
        }
    }

    int len = k.size() - 1;
    for (int i = len; i >= 0; i--) {
        if (k[i] == ' ') {
            k.pop_back();
        } else {
            break;
        }
    }

    reverse(k.begin(), k.end());

    for (int i = 0; i < k.size(); i++) {
        if (k[i] == ' ') {
            reverse(k.begin() + start, k.begin() + i);
            start = i + 1;
            words = i + 1;
        }
    }
    reverse(k.begin() + words, k.end());

    cout << k << endl;

    return 0;
}
