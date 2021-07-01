// stock10.cpp -- Stock class with constructors, destructor added
#include "stock00.h"
#include <iostream>
#include<string>

Stock::Stock()
{
   std::cout << "Default constructor called" << std::endl;
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const std::string &co, long n, double pr)
{
    std::cout << "constructor" << co << "callled\n";
    company = co;
    if (n < 0)
    {
        std::cout << "shares is not negative number\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;

    set_tot();
}
Stock::~Stock()
{
    std::cout<<"Bye"<<company<<"!\n";
}
void Stock::buy(long num,double price)
{
    if(num<0)
    {
        std::cout<<"number purchase is not negative\n";
    }
    else{
        shares+=num;
        share_val=price;
        set_tot();
    }
}
void Stock::sell(long num,double price)
{
    using std::cout;
}
void Stock::update(double price)
{

}
void Stock::show()
{

}