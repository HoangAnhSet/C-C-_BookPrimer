#include<iostream>
using namespace std;
class Hinh
{      
    private:
    int canh;
    public:
    Hinh()
    {
        canh=0;
    }
    void showCanh()
    {
        cout<<canh<<endl;
    }
    ~Hinh()
    {
        cout<<"Good bye";
    }

};
int main()
{
    Hinh hinh1;
    hinh1.showCanh();
    ~hinh1();
    return 0;
}