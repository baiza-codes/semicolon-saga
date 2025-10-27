#include <iostream>
using namespace std;

int main(){
    int n;
    int i;
    cout << "Enter number:";
    cin>> n;
    cout << "Before reverse: " ;
    for ( i = 0; i <= n ; i++)
    {
        
        cout << i << " ";

    }
    cout << "\nAfter reverse: " ;

       for ( i = n ; i >= 0 ; i--)
          {

        cout  << i << " ";
 
        }
   return 0;
}