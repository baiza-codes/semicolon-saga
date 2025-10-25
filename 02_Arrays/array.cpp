#include <iostream>
using namespace std;

int main()
{
    /*
    string arr[5] = {"BMW", "Challenge", "Ferrari", "Camry","Corolla"} ;

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    */

    string arr[4][4] = {{"Toyota", "Hyundai", "Ford", "Honda"},
                        {"Camry", "Elantra", "Ranger", "Civic"},
                        {"Tundra", "Sonata", "F-150", "Accord"},
                        {"Corolla", "Ioniq 5", "RAM", "City"}};
    /*
         cout << arr[0][0] << " " ;  
         cout << arr[0][1]<< " ";  
         cout << arr[0][2]<< " "; 
         cout << arr[0][3]<< "\n "; 
         cout << arr[1][0]<< " ";  
         cout << arr[1][1]<< " ";  
         cout << arr[1][2]<< " ";       
         cout << arr[1][3]<< "\n "; 
         cout << arr[2][0]<< " ";  
         cout << arr[2][1]<< " ";  
         cout << arr[2][2]<< " ";  
         cout << arr[2][3]<< "\n "; 
         cout << arr[3][0]<< " "; 
         cout << arr[3][1]<< " "; 
         cout << arr[3][2]<< " "; 
         cout << arr[3][3]<< "\n "; 
         */
        int i;
        int j;
        for ( i= 0; i< 4 ; i++)
        {
            for (j= 0; j< 4; j++)
            {
                cout << arr[i][j] << " | " ;
            }
            cout << "\n";
            
        }



    return 0;
}