#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 60, 70};
    list<int> newList = {100, 200, 300, 400, 500};
    vector<int> v = {60, 70, 80};
    // list<int> newList;
    // newList = myList;
    // newList.assign(myList.begin(), myList.end());
    // cout << myList.size()<<endl;

    // myList.push_back(100);
    // myList.push_front(100);
    // myList.pop_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(),2), 200);
    // myList.insert(next(myList.begin(),0), 200);
    // myList.insert(next(myList.begin(),3), 100);
    // myList.erase(next(myList.begin(),3));
    // myList.insert(next(myList.begin(), 3), {100, 200, 300, 400});
    // myList.insert(next(myList.begin(), 3), newList.begin(), newList.end());
    // myList.insert(next(myList.begin(), 3), v.begin(), v.end());
    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));
    // replace(myList.begin(),myList.end(),30,100);
    // for (int val : myList)
    // {
    //     cout << val << endl;
    // }

    auto it = find(myList.begin(), myList.end(), 50);
    // cout<<*it<<endl;
    if (it == myList.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}