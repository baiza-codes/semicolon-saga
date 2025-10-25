#include <iostream>
using namespace std;

int main (){

    int age;

    cout << "Enter your age : ";
    cin >> age ;

    if ( age >=18 ){
        cout << "\n You are an Adult! " << endl;
    }
    else {
        cout << "You are a Minor! " << endl;
    }
}