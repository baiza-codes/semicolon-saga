#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter a : "<< endl;
    cin>> a;
    cout << "Enter b : "<<endl;
    cin>>b;
    cout << "\n ----------Arithmetic Operations----------\n";
    cout << "Sum = " << a + b << endl;
    cout << "Suctraction = " << a-b <<endl;
    cout << "Multiplication = "<< a * b << endl;
    cout << "Division = " << a / b <<endl;
    cout << "Modulus = " << a % b << endl;
    cout << boolalpha;
    
    cout << "\n------------Relational Operations-----------\n";

    cout << " Greater than = " << (a>b) << endl;
    cout << " Smaller than = " << (a<b) << endl;
    cout << " Greater than or equal to = " << (a>=b) << endl;
    cout << " Smaller than or equal to = " << (a<=b) << endl;
    cout << " Equal to = " << (a==b) << endl;
    cout << " Not Equal to = " <<(a!=b) << endl;
    cout << "\n----------Logical Operators-----------\n";
    
    cout << " AND Operator : " << (a>b && a>5) << endl;
    cout << " OR Operator : " << (a>b || b < 20) << endl;
    cout << " NOT Operator : " << !(a>=b)<< endl;
    cout << " \n------------Pre and Post Increment------------\n";

    cout << " Post increment of a : "<< a++ <<" of b : " << b++ << endl;
    cout << " Pre increment of a : " << ++a << " of b : " << ++b << endl;

    return 0;

}