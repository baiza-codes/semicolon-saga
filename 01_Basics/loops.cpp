#include <iostream> 
using namespace std;

int main(){
     int i;
      
    for (i=0; i<=10; i++)
      {

        cout << i << endl;
      }
      cout << "------------------------------------\n";
    for ( i = 0 ; i <= 20 ; i+=2) // i adds 2 in it after every iteration and makes even numbers
      {
        cout << i << endl; 
      }
      cout <<" ---------------------------------------\n";
       
       int sum = 0; //intialize sum with 0 
       
      for (  i=0; i <= 100; i++)
      {
        
        sum+=i; // as sum is zero adds i gets iterated and gets add in sum 
        cout << sum << endl;
      }
      cout << "\n------------------------------------------\n";
         
        
      do 
      {
          
          cout<< "guess the number : " ;
          cin >> i ;
          
      }
      while (i != 5 ); // repeats the loop untill user enters 5 translates like ( if i !=5 do it repeat the loop)
      cout << " You guessed it right! "<< endl;

    return 0;
}