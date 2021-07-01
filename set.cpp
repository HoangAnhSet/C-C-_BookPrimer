#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    //Sets are containers that store unique elements following a specific order.
    // In a set, the value of an element also identifies it (the value is itself the key, of type T)
    // and each value must be unique.
    //  The value of the elements in a set cannot be modified once in the container (the elements are always const),
    //  but they can be inserted or removed from the container.
    int queries, action, value; //if action=1->add element, action=2->delete an element,action=3->find value
    set<int> setTest;
    cin >> queries;
    while (queries)
    {
        cin >> action;
        if (action == 1)
        {
            cin >> value;
            setTest.insert(value);
        }
        else if (action == 2)
        {
            cin >> value;
            setTest.erase(value);
        }
        else if (action == 3)
        {
            cin >> value;
            if (setTest.end() != setTest.find(value))
            {
                cout << "Yes"<<endl;
            }
            else
                cout << "NO"<<endl;
        }
        else
        {
            cout << "action valueation are 1,2,3";
            continue;
        }
        queries--;
    }
}
//test case:8
/*
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6
*/