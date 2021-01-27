//
//  main.cpp
//  Bank Management Information System
//
//  Created by Avishai Rostamian on 5/26/20.
//  Copyright © 2020 Avishai Rostamian. All rights reserved.
//



#include <iostream>
#include <cstring>
#include <unistd.h>     //  Library for "sleep" function
#include <fstream>      //  Library for text documents
#include <string>


using namespace std;


ofstream mainFile;      //  Stores text documents




// Space Function * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

void space( int x){                            //   Function for creating space in terminal
    for ( int i = 0; i < x; i++){
        cout << endl;
    }
}

// Go To Main Menu Function * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

void gomainMenu(){
   cout << "Press Enter for main menu\n";

}

// New Account Function * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

void newAccount(){                              //  Function for creating and storying new account
    
    space(50);
    
        cout<<"\nEnter The account Number : ";           //  Outputs information for user to input
        char acno[30];
        cin >> acno;                                    //  Inputs user information for account number
    
    
    mainFile.open("accno.txt", ios_base::app);      //  Opens Accno text file
    mainFile << acno << endl;                       //  Stores account number
    mainFile.close();
    
    
        cout<<"\n\nEnter The First Name of The account Holder : ";      //  Outputs user prompt
        string acnameFirst;
        cin >> acnameFirst;                                             //  Stores input in string variable
    
            mainFile.open("accnameF.txt", ios_base::app);
            mainFile << acnameFirst << endl;
            mainFile.close();
    
    cout<<"\n\nEnter The Last Name of The account Holder : ";
    string acnameLast;
    cin >> acnameLast;
    
    mainFile.open("accnameL.txt", ios_base::app);
    mainFile << acnameLast << endl;
    mainFile.close();
    
    cout<<"\n\nEnter The Type of The account (1 for Checking / 2 for Savings) : ";
    int acctype;
    cin >> acctype;
    while ( acctype > 2 || acctype < 1){                          //  Validates user input
        cout << "\n\nEnter 1 for Checking account or Enter 2 for Savings Account:  ";
        cin >> acctype;
    }
    
    double accdepositC = 0.0;
    double accdepositS = 0.0;
    
    if (acctype == 1){
    cout<<"\n\nEnter The Initial Checking amount : $";
        
        cin >> accdepositC;
        
        mainFile.open("accdepositC.txt", ios_base::app);
        mainFile << accdepositC << endl;
        mainFile.close();
    }
    
    if (acctype == 2){
    cout<<"\n\nEnter The Initial Savings amount : $";
        cin >> accdepositS;
        
        mainFile.open("accdepositS.txt", ios_base::app);
        mainFile << accdepositS << endl;
        mainFile.close();
    }
    
 // Exit Sequence - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
    space(20);
    
    cout << acnameFirst << " " << acnameLast << endl;
    
    cout << endl << "Account Number: " << acno << endl;
    
    if (acctype == 1){
        cout << endl << "Checkings: $" << accdepositC;
    }
    
    if (acctype == 2){
        cout << endl << "Savings: $" << accdepositS;
                
    }
    
    cout<<"\n\n\nAccount Created..\n\n";                    //    Confirms account created
    
    sleep(3);
}

// Deposit Function * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
                                //FIX ME ADD IF ACC NUM NOT FOUND AND STORE IN 1 OR 2 IF FOUND
void deposit(){
    int checkOrsav;
    double checking, saving;
    
    space(50);
    
    ifstream mainFile("acno.txt");          //Input account number text file
              mainFile.open("acno.txt");
              
   // if (mainFile.is_open()){
                  while(!mainFile.eof()) {
                      
                      cout << "Enter account number: \n";
                      string accnum;
                      cin >> accnum;
                      
                      char search = accnum[50];
          // ifstream mainFile("acno.txt");
           //mainFile.open("acno.txt");
           
               
             //  while(!mainFile.eof()) {
           
               // pos = accnum.find(accnum);
                   
                     // while (getline(mainFile,accnum)){
                   
                     if (accnum.find(search) != string::npos) {
                   cout << accnum;
                     }
                  
    
    
                     else cout << "Not found";
                  }
                      
    cout << "- - - DEPOSIT - - -\n\n";
    cout << "1. Checking" << endl << endl << "2. Saving" << endl;
    cout << endl << "Choose an option: ";
    cin >> checkOrsav;
    
   while ( checkOrsav > 2 || checkOrsav < 1){                          //  Continuously asks for user input if 1 or 2 is not selected
       cout << "Enter 1 for Checking account or Enter 2 for Savings Account:  ";
       cin >> checkOrsav;
   }

    if (checkOrsav == 1){
        
       
                
              /*  if(pos!=string::npos) // string::npos is returned if string is not found
                    {
                        cout << "Account number not found" << endl
                      
                        break;
                    } */
                        }
                    }
            
            
        
    
    
 /*   cout << "Enter account number: \n";
       cin.getline(acno, 100);
    
    
    int acno;
    
    cin >> acno;
  
    
    mainFile.open("accno.txt", ios_base::app);
    ifstream f("accno.txt");
    string line;
    
    
    while(!mainFile.eof()) {
        
    getline(mainFile, acno);
        
        
    while(!accno.txt.eof()) {
    getline(accno.txt, line);
        
    }
    
    
    while ( checkOrsav > 2 || checkOrsav < 1){                          //  Continuously asks for user input if 1 or 2 is not selected
        cout << "Enter 1 for Checking account or Enter 2 for Savings Account:  ";
        cin >> checkOrsav;
    }
    if (checkOrsav == 1){
    cout << endl << "Enter The Checking Deposit Amount : $";
        cin >> checking;
        
        cout<<"\n\n\nDeposited $" << checking << " ...\n";
            
            sleep(3);
    }
    
    if (checkOrsav == 2){
    cout<<"\nEnter The Savings Deposit Amount : $";
        cin >> saving;
        
        cout<<"\n\n\nDeposited $" << saving << " ...\n";
            
            sleep(3);
    }
    
}
*/


// Deposit Function * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

void withdraw(){
    
    cout << "\nEnter account number: \n";
    int accno;
    cin >> accno;
    
    ifstream mainFile("acno.txt");          //Input account number text file
                 mainFile.open("acno.txt");
    

}


// Main Menu Function * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

void mainMenu(){                            //  Function displaying main menu
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
    << endl << "8 . EXIT\n\n\n"
    << endl << "Enter input: ";
   
    int x;
    cin >> x;
    
    if (x == 1){
        newAccount();                   //  Runs new account function if option 1 selected
    }
    
    if (x == 2) deposit();
    
    if (x == 8){
        cout << "\nSaving.." << endl;
        sleep(2);
        mainFile.close();       //  Closes text files
        exit(0);                //  Quits program if option 8 selected
    }
}


// Main Function * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

int main(){
    

    
    for ( int i = 0; i < 15; i++){              //  Loop creates i number of "~" for intro
        cout << "- ";
    }
    cout << endl;
    
    cout << endl <<"         BANK\n" << endl;
    cout <<"       MANAGEMENT\n" << endl;
    cout <<"         SYSTEM\n" << endl;
    
    for ( int i = 0; i < 15; i++){              // Loop creates "~" for intro
        cout << "- ";
    }
    

    
    cout << endl << endl << endl << endl << endl << "Created By : Avishai Rostamian\n" << endl;
    cout <<"School  : Queens College \n" << endl;
    

    gomainMenu();
    
    
    getchar();
    
    
    while(true){
        mainMenu();
    }
    
}

