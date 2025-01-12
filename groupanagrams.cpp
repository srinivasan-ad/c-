#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"}; 

    unordered_map<string, vector<string>> Val;
    for (const auto& str : strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end()); 
        Val[sortedStr].push_back(str);          
    }

    vector<vector<string>> result;
    for (const auto& it : Val) {
        result.push_back(it.second); 
    }
    for (const auto& group : result) {
        cout << "[";
        for (size_t i = 0; i < group.size(); i++) {
            cout << group[i];
            if (i != group.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}
