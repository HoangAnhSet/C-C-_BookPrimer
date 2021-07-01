#include<iostream>
using namespace std;
class Person
{
    public:
    static int id;
    Person()
    {
        id++;
    }
};
int Person::id=0;
int main()
{
    Person p1;
    
    cout<<p1.id<<endl;
    Person p2;
    cout<<p2.id<<endl;
    return 0;
}