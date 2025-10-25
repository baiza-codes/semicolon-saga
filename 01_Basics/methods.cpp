#include <iostream>
using namespace std;

int main(){
    string name;
    cout<< " ENter your name: ";
    getline(cin, name); // the usual cin does not count name after one space/tab, so we use getline(cin, name) method that counts input of the whole line

    if (name.empty()){ // checks if name is empty or user did not enter name
        cout << " You didn't enter name " <<endl;
    }
    else if ( name.length()> 12){  // checks the length of string 
        cout << "Your name can't be greater than 12 characters! "<< endl;

    }
    /*
    else {
        cout << "Name: "<< name ;
    }
      */
    name.append("@gmail.com"); // adds whatever in the brackets to the string (name )

    cout << " Your username is now :" << name;
    

  return 0;
}