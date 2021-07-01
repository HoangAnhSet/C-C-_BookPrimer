#ifndef BRASS_H_
#define BRASS_H_
#include<string>

class Brass
{std::string fullname;
long accNum;
double balance;
public:
Brass(const std::string & s="NullBody",long an=-1,double bal=0.0);
void Deposit(double awt);
virtual void Withdraw(double amt);
double Balance() const;
virtual void ViewAcct() const;
virtual ~Brass(){}

};
#endif