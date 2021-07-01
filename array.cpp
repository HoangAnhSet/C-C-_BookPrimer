#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int* arr=new int[n];
    cin >> n;
    for (int i = n - 1; i >= 0; i--)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)

        cout << arr[i]<<" ";
    delete[] arr;
    return 0;
}