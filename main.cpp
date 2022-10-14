#include <iostream>

using namespace std;

int main()
{
    // A PROGRAM THAT DISPLAYS THE VENUES FOR MATH 126 IA.
    int IDnumber ;


    cout << "Enter IDnumber"<<endl ;
    cin >> IDnumber ;


    if (IDnumber>=10666532 && IDnumber<=10965152){
      cout << "Your Math 126 IA center is " << "CENTRAL CAFETERIA" <<endl;
    }



    else if(IDnumber>= 10965154 && IDnumber<=10974475){
        cout << "Your Math 126 IA center is " << "ORACCA TETTEH BUILDING" << endl;
    }

    else if(IDnumber>=10974577 && IDnumber <= 10984599 ){
        cout << "Your Math 126 IA center is " << "FCOS/HOME SCIENCE ANNEX" << endl;
    }

    else if(IDnumber>=10984723 && IDnumber <= 10997295){
        cout << "Your Math 126 IA center is " << "K A BUSIA" << endl;
    }

    else{
        cout<< " you are not offering math126 this semester";
    }

   cout << "At 8 am GMT " << endl << "make sure you are there 30 minutes before time" ;

 return 0;
}
