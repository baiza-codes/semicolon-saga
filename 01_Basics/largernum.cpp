#include <iostream>
using namespace std;

int main(){

     int a;
     int b;
    cout << " Enter two Numbers: ";
    cin>> a>>b;
    if (a>b){
        cout<< a<<" is larger."<<endl;

    }
    else if (a<b){
        cout<< b<<" is larger."<<endl;
        
    }
    else {
        cout<<" Both are equal."<<endl;
        
    }
    return 0;
}