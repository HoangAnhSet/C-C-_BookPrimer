#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int cases, value, mark;
    string name;

    map<string, int> sheet;
    map<string, int>::iterator it;
    while (cases--)
    {
        cin >> value;
        if (value == 1)
        {
            cin >> name >> mark;
            if (sheet.find(name) != sheet.end())
            {
                mark=mark+sheet.find(name)->second;
            }

            sheet.insert(make_pair(name, mark));
        }
        else if (value == 2)
        {
            cin >> name;
            sheet.erase(name);
        }
        else if (value == 3)
        {
            cin >> name;
            cout << sheet.find(name)->second << "\n";
        }
        else
        {
            cout << "Value is invalid!\n";
        }
    }

    return 0;
}
/* test case
7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
*/
