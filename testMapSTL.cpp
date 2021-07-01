#include<iostream>
using namespace std;
///Introduction:Maps are a part of the C++ STL
/*
Maps are associative containers that store elements formed by a combination of a key value
and a mapped value,following a specific order.The mainly used member functions of maps are:
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include<string>
#include <algorithm>
using namespace std;


int main() {
   int queries,markStudent,action;
   //action=1->add mark,action=2->erase mark,action=3->print mark
    string nameStudent;//key
    map<string,int> sheetStudents;
    map<string,int>::iterator it;
    cin>>queries;
    while(queries--)
    {
        cin>>action;
        if(action==1)
        {
            cin>>nameStudent;
            cin>>markStudent;               
            sheetStudents.insert(make_pair("nameStudent",markStudent));
        }
        else if(action==2)
        {
            cin>>nameStudent;
            sheetStudents.erase(nameStudent);
            
        }
        else if(action==3)
        {
            cin>>nameStudent;
            it=sheetStudents.find(nameStudent);
            if(it!=sheetStudents.end())//it is found
            cout<<sheetStudents.find(nameStudent)->second<<endl;           

        }
        else
        {
            cout<<"action is 1,2,3";
            continue;
        }
    }
    return 0;
}

