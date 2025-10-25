 /*
 //1. declare variables in one statement
 int c, thisisAVariable, q76354, number;
 //2. prompt the user to enter an integer. End message with colon(:) followed by a space and leave th ecursor positioned after the space.
 cout <<"Enter an integer: ";
 //3. read input on keyboard and store it in variable age
 cin >> age;
//4. if a variable number is not equal to 7, print "The variable number is not equal to 7".
if(a != 7)   cout << " The variable number is not equal to 7!"; // works with or without ccurly brackets
//5. Print the message "This is a c++ program " on one line.
cout << "This is a c++ program" ;
//6. Print the message "This is a c++ program " on two lines. program will be on 2nd line.
cout << "This is a c++ \n program";
//7. Print the message "This is a c++ program " with each word on seperate line.
cout << " This \n is \n a \n c++ \n program" ;
//7. Print the message "This is a c++ program " seperate eeach word with a tab.
cout << "This\tis\ta\tc++\tprogram" ;
 */
//2.4 : calculate the product of three integers
#include <iostream>
using namespace std;
int main(){
     int x = 0;
     int y = 0;
     int z = 0;
     int result = 0;

    cout << "Enter three integers: " ;
    cin >> x >> y >> z;
      result = x*y*z;
  
    cout << "The product is: " << result << endl;
    
    return 0;
}
   