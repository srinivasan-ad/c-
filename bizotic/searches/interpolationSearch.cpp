#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4,5,6,8,9,10};
    int x = 8;
    int low = 0;
    int count = 0;
    bool found = false;
    int high = arr.size() - 1;
    while(low <= high && x >= arr[low] && x < arr[high])
    {
        int pos = low + ((x - arr[low]) * (high - low)) / (arr[high] - arr[low]);
        count++;
        if(arr[pos] == x)
        {
            cout << "Element found at pos : " << pos << endl;
            found = true;
            cout << "Number of iterations is -> " << count << endl;
            break;
        }
        else if(arr[pos] < x)
        {
            low = pos + 1;
        }
        else{
            high = pos - 1;
        }
    }
    if(!found)
    {
        cout << "Element not present in the target array" << endl;
        cout << "Number of iterations is -> " << count << endl;
    }
return 0;
}