#include<bits/stdc++.h>

using namespace std;

struct Workshop 
{
    int start_time ;
    int duration ;
    int end_time;
};
struct Available_Workshops 
{
    int n; // số workshop sinh vien dk
   Workshop* workshop=new Workshop[n];
};

Available_Workshops* initialize(int start_time[],int duration[], int n)
{
    Available_Workshops* available_workshops;
    available_workshops->n=n;
    for(int i=0;i<n;i++)
    {
       available_workshops->workshop[i].start_time=start_time[i];

        available_workshops->workshop[i].duration=duration[i];

    }
    
    return available_workshops;

}   

int CalculateMaxWorkshops(Available_Workshops* ptr)
{int max_work_shop=4;

return max_work_shop;
}
int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    // ptr = initialize(start_time,duration, n);
    // cout << CalculateMaxWorkshops(ptr) << endl;
    cout<<ptr->n;
    return 0;
}
