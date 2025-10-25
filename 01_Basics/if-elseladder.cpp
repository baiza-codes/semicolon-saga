 #include <iostream>
 using namespace std;

 int main()
 {
     int Marks;
     cout << "Enter your marks out of 1100: ";
     cin >> Marks;
     if ( Marks>=800){
        cout<< "Your Grade: A" <<endl;
    
     }
     else if ( Marks>=600){
        cout<< "Your Grade: B" <<endl;
    
     }
     else if ( Marks>=400){

        cout<< "Your Grade: C" <<endl;
    
     }
     else {
        cout<< "Your failed!" <<endl;
    
     }



    return 0;

 }