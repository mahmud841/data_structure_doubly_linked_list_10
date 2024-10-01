#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 30, 10, 25, 70, 50, 10, 30, 10};
    // myList.remove(10);
    // sort(myList.begin(), myList.end()); kaj korbe na
    // myList.sort(); // soto theke boro
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}