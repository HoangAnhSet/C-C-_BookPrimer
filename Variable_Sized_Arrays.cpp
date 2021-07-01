#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int soHang,soTruyv,giaTri;
   int kichThuoc,i,j;
   vector<vector<int>> nvect;
   cin>>soHang>>soTruyv;
   
   for( int i=0;i<soHang;i++)
   {
       vector<int> ivect;
       cin>>kichThuoc;
       for(int j=0;j<kichThuoc;j++)
       {
           cin>>giaTri;
           ivect.push_back(giaTri);
       }
       nvect.push_back(ivect);
   }
   for(int i=0;i<soTruyv;++i)
   {
       cin>>i>>j;
       cout<<nvect[i][j]<<endl;
   }
    return 0;
}