#include <iostream>
using namespace std;

 int main(){
     int total = 0;
    int sum[5] = {10, 50, 40, 26, 90};
     for (int  i = 0; i <= 4; i ++)
     {
        total += sum[i];
     }
    cout << total ;

 }