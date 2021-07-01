#include<iostream>
using namespace std;
void swap(int& a,int& b)
{
    int c=a;
    a=b;
    b=c;
}
int main()
{
    int arr[5]={1,23,44,25,15};
    int n=5;
    int i=0;
    for(i;i<n;i++)
    {
        int minIndex=i;
        int j=i+1;
        for(j;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    
}