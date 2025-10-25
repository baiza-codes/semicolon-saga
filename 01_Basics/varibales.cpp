#include <iostream>
using namespace std;

int main(){

    int age = 20;
    float cgpa = 3.50;
    string Name = "Baiza" ;
    char grade = 'A';
    double pivalue = 3.14;
    

    cout<< "\n -----Information of Student-----"<< endl;

   cout << "Name of Student is : "<< Name<<endl;
   cout << "Age of Student is : " << age <<endl;
   cout << "cgpa is : " << cgpa <<endl;
   cout << "pi value is : " << pivalue <<endl;
   

   cout << "\n -----Size of Datatypes in bytes-----" << endl;

   cout << "int : " << sizeof(int) << " bytes"<< endl;
   cout << "float : " << sizeof(float) << " bytes"<< endl;
   cout << "char : " << sizeof(char) << " bytes"<< endl;
   cout << "string : " << sizeof(string) << " bytes"<< endl;
   cout << "double : " << sizeof(double) << " bytes"<< endl;
   cout << "bool : " << sizeof(bool) << " bytes"<< endl;

   cout << "\n -----Area of Circle-----"<<endl;
    const double PI = 3.14159;
    double r;

    cout << "Enter radius: ";
    cin >> r;

    double area = PI * r * r;
    cout << "PI : " << PI <<endl;
    cout << "Radius = " << r << endl;
    cout << "Area = " << area << endl;

    return 0;



}