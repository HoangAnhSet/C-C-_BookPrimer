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
class RatedPlayer : public TableTennisPlayer
{
private:
    unsigned int rating;

public:
    RatedPlayer(unsigned int r ,const string &fn,const string & ln,bool ht)
    {
        
    }

};