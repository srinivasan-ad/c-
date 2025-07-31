#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;
    vector<int> Vals = {1,2,3,4};
    vector<int> dynamic(4,1);
    for(int val : Vals)
    {

       std :: cout<< "Array contents" << ":" << val <<endl;
    }
    for(int val : dynamic)
    {
        std:: cout << "Array contents : " << val << endl;
    }
    std :: cout <<  "Size function -> Size before push_back : "  << Vals.size() <<endl ;
    Vals.push_back(5);
    std :: cout << "Size after push_back : " << Vals.size() << endl;
Vals.pop_back();
Vals.pop_back();
Vals.pop_back();
std :: cout << "Size after pop_back : " << Vals.size() << endl;
std:: cout << "Front func ->  Front of array is : " << Vals.front() << endl;
std :: cout << "Back func ->  Back of array is : "  << Vals.back() << endl ;
nums.push_back(1);
// nums.push_back(2);
std :: cout << "Size : " << nums.size() << endl;
std :: cout << "Capacity : " << nums.capacity() << endl;
nums.push_back(3);
nums.push_back(4);
std :: cout << "Size : " << nums.size() << endl;
std :: cout << "Capacity : " << nums.capacity() << endl;
nums.push_back(3);
nums.push_back(4);
std :: cout << "Size : " << nums.size() << endl;
std :: cout << "Capacity : " << nums.capacity() << endl;

}