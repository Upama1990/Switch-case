#include <iostream>
using namespace std;
int main()
{
    int command =0, money =0, balance = 100 ;

    cout<<endl<<"Enter command number :" <<endl ;
    cout<<endl<<" 0-quit " ;
    cout<<endl<<"1-deposit money" ;
    cout<<endl<<"2-withdraw money" ;
    cout<<endl<<"3-print balance  ";
    cin>>command;

    switch(command)
    {
        case 0:
           cout<<endl<<"See you latetr!" <<endl;
           break;

        case 1:
             cout<<endl<< "Enter deposit amount: ";
             cin>>money;
             balance= balance+money;
             break;

        case 2: 
             cout<<"Enter withdraw amount : ";
             cin>>money;
             balance=balance-money;
             break;

        case 3:
             cout<<endl<<"Current balance = "<<balance<<endl;
             break;

        default :
              cout<<"Ooops try again "<<endl;
              break;


    }

    cout<<"Final balace == "<<balance<<endl;
    return 0;

}
