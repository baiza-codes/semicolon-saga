#include <iostream>
using namespace std;

int main(){
    int Year;

    cout << "Enter Year: " ;
    cin >> Year;

    if ((Year%4==0 && Year%100!=0)|| Year%400==0){
        cout << "it is a leap year!" << endl;   

    }
    else{
        cout<< "not a leap year! ";
    }
    return 0;
}