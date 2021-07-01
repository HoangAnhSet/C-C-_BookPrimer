#include<iostream>
using namespace std;
class Person
{
   public:
   virtual void hat()
   {
      cout<<"Person hat"<<endl;
   }

};
class Vietnam:public Person{
   public:
   void hat()
   {
      cout<<"Vietnam Hat"<<endl;
   }
};
int main()
{
   string text;
   while(getline(cin,text))
   cout<<text<<endl;
   return 0;
}