#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T; //the number of the test cases
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while (T--)
    {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long)A << endl;                   // actual printed part

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl;                                                                       // actual printed part

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl;                                               // actual printed part

        /* Enter your code here */
    }
    return 0;
}
//testcase
/*
1  
100.345 2006.008 2331.41592653498
*/