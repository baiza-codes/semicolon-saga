#include <iostream>
using namespace std;

int main(){
    int angle1;
    int angle2;
    int angle3;

    cout << " Enter angle1: " ;
    cin>>angle1;
    cout <<" Enter angle2: ";
    cin>>angle2;
    cout << "Enter angle3: ";
    cin>>angle3;
    if (  (angle1 + angle2 + angle3)==180){
        cout << " It is triangle! ";

    }
    else{
        cout<< "it is not triangle!";

    }
    return 0;
}