#include <iostream>
// #include <utility> used for the function swap(a, b) coz values of a and b could overflow (go beyonf int range)
using namespace std;

int main(){
    int a, b ;
    cout<< "Enter two numbers: ";
    cin>>a>>b;
    cout << "Before swap: " << "a = " << a << " b = " << b <<endl;
    // swaping a and b 
    // swap(a, b) better practice
    a = a + b ;
    b = a - b ;
    a = a - b ;
    cout << "After swap: " << "a = " << a << " b = " << b <<endl;
    return 0;
}