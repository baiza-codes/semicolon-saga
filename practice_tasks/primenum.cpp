#include <iostream>
using namespace std;

int main(){
       int a;
       cout << "Enter number:";
       cin >> a;
        if ( a%1==0 && a%a==0){
            cout << "Number is Prime. ";

        }
        else{
            cout << "Number is not prime.";
        }
        return 0;
    }