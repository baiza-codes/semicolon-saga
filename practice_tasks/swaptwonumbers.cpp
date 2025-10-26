#include <iostream>
using namespace std;

int main(){
    int a, b ;
    cout<< "Enter two numbers: ";
    cin>>a>>b;
    cout << "Before swap: " << "a = " << a << " b = " << b <<endl;
    // swaping a and b 
    a = a + b ;
    b = a - b ;
    a = a - b ;
    cout << "After swap: " << "a = " << a << " b = " << b <<endl;
    return 0;
}