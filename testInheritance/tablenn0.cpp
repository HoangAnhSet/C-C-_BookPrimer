#include "tabtenn0.h"
#include <iostream>
#include <string>

TableTennisPlayer::TableTennisPlayer(const std::string &theFirstName,
                                     const std::string &theLastName, bool ht)
{
    firstName = theFirstName;
    lastName = theLastName;
    hasTable = ht;
}
void TableTennisPlayer::showName() const
{
    cout << lastName << " , " << firstName << endl;
}
RatedPlayer::RatedPlayer(unsigned int r,const string & fn,const string & ln,
bool hs)
{
    TableTennisPlayer(fn,ln,hs);
    rating=r;
}
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & pt):TableTennisPlayer(pt)
{
    rating=r;
}
