#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ratings = {1, 0, 2}; 

    if (ratings.size() == 1) {
        cout << 1 << endl;
        return 0;
    }

    bool perfect = true;
    vector<int> candy;
    if (ratings[1] >= ratings[0]) {
        candy.push_back(1);
    } else {
        candy.push_back(2);
    }

    int candies = 0;
    for (size_t i = 1; i <= ratings.size() - 1; i++) {
        if (ratings[i] > ratings[i - 1]) {
            candy.push_back(candy[i - 1] + 1);
        } else {
            if (i != ratings.size() - 1 && ratings[i] > ratings[i + 1]) {
                perfect = false;
            }
            candy.push_back(1);
        }
    }

    if (!perfect) {
        for (int i = ratings.size() - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1] && !(candy[i] > candy[i + 1])) {
                candy[i] = candy[i + 1] + 1;
            }
        }
    }

    for (size_t i = 0; i <= ratings.size() - 1; i++) {
        candies += candy[i];
    }

    cout << candies << endl;
    return 0;
}
