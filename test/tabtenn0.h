#ifndef TABLE_H_
#define TABLE_H_
#include<string>
using namespace std;
class TableTennisPlayer{
    private:
    string firstName;
    string lastName;
    bool hasTable;
    public:
    TableTennisPlayer(const string & theFirstName="none",const string & theLastName="none", bool hastable=false);
    void showName()const;
    bool getResultHasTable() const{return hasTable;}
    void resetTable(bool v)
    {
        hasTable=v;
    }
};
#endif