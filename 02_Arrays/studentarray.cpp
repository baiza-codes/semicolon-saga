#include <iostream>
using namespace std;

int main()
{
      string student[] = {"Baiza", "Nafees", "Safa", "Raven", "Bushra"};
        int i;
 //sizeof(student)/sizeof(string) -> will output the exact strings as are in the array
      for (i= 0; i < sizeof(student)/sizeof(string); i++)
      {
            cout << student[i] <<endl;
      }

    return 0;
}