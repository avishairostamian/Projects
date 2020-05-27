//
//  main.cpp
//  Bank Management Information System
//
//  Created by Avishai Rostamian on 5/26/20.
//  Copyright © 2020 Avishai Rostamian. All rights reserved.
//



#include <iostream>
#include <cstring>
#include <unistd.h>
using namespace std;



void gomainMenu(){
   cout << "Press Enter for main menu\n";

}

void newAccount(){
    
   cout<<"\nEnter The account Number : ";
    int acno;
    cin >> acno;
    
    cout<<"\n\nEnter The First Name of The account Holder : ";
    string acnameFirst;
    cin >> acnameFirst;
    
    cout<<"\n\nEnter The Last Name of The account Holder : ";
    string acnameLast;
    cin >> acnameLast;
    
    cout<<"\nEnter The Type of The account (1 for Checking / 2 for Savings) : ";
    int acctype;
    cin >> acctype;
    while ( acctype > 2 || acctype < 1){
        cout << "Enter 1 for Checking account or Enter 2 for Savings Account:  ";
        cin >> acctype;
    }
    if (acctype == 1){
    cout<<"\nEnter The Initial Checking amount : $";
        double accdepositC;
        cin >> accdepositC;
    }
    
    if (acctype == 2){
    cout<<"\nEnter The Initial Savings amount : $";
        double accdepositS;
        cin >> accdepositS;
    }
        
    cout<<"\n\n\nAccount Created..";
    
    sleep(2);
        
    }

void mainMenu(){                            //Function that displays the main menu
    for ( int i = 0; i < 50 ; i++){
        cout << "\n";
    }
    cout << "MAIN MENU\n"
    << endl <<  "1 . NEW ACCOUNT\n"
    << endl << "2 . DEPOSIT AMOUNT \n"
    << endl << "3 . WITHDRAW AMOUNT\n"
    << endl << "4 . BALANCE INQUIRY \n"
    << endl << "5 . ALL ACCOUNT HOLDER LIST\n"
    << endl << "6 . CLOSE AN ACCOUNT\n"
    << endl << "7 . MODIFY AN ACCOUNT\n"
    << endl << "8 . EXIT\n\n\n";
   
    int x;
    cin >> x;
    
    if (x == 1){
        newAccount();                   //Runs the new account function if 1 is selected
    }
    
    if (x == 8) exit(0);
}



int main(){
    
    for ( int i = 0; i < 15; i++){              //loop to create "-" for the intro
        cout << "- ";
    }
    cout << endl;
    
    cout << endl <<"         BANK\n" << endl;
    cout <<"       MANAGEMENT\n" << endl;
    cout <<"         SYSTEM\n" << endl;
    
    for ( int i = 0; i < 15; i++){              //loop to create "-" for the intro
        cout << "- ";
    }
    

    
    cout << endl << "MADE BY : Avishai Rostamian\n" << endl;
    cout <<"SCHOOL  : Queens College \n" << endl;
    

    gomainMenu();
    
    
    getchar();
    
    
    while(true){
        mainMenu();
    }
    
}

