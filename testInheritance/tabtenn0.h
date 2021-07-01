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
    // TableTennisPlayer(const string & theFirstName,const string & theLastName , bool hastable);
    void showName()const;
    bool getResultHasTable() const{return hasTable;}
    void resetTable(bool v)
    {
        hasTable=v;
    }
};
class RatedPlayer:public TableTennisPlayer{
    private:
    unsigned int rating;
    public:
    RatedPlayer(unsigned int r = 0 ,const string &fn="none", const string &ln="none",bool hs=false);
    RatedPlayer(unsigned int r,const TableTennisPlayer &tp);
    unsigned int Rating() const
    {
        return rating;
    }
    void ResetRating(unsigned int r)
    {
        rating=r;
    }
};
#endif