#include <iostream>
using namespace std;

int main(){
     int i ; 
     cout << "Enter some number : ";
     cin>> i;
     cout << "\n";
     if ( i%2==0 ) {
        cout<< i<< " is Even number. " <<endl;
        
     }
     if( i%2 !=0){
        cout<< i << " is Odd Number. "<< endl;
     }
     return 0;
}