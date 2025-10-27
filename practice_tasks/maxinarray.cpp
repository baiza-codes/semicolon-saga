#include <iostream>
using namespace std;

int main(){
    int max;
    int arr[6] = {1, 5, 7, 90,  45, 56};
    max = arr[0];
     for ( int i = 1; i <= 5 ; i ++){
              if( arr[i] > max ){
                   max = arr[i];

              }
        
     }
         cout << max;
        
        return 0;
        
    
}