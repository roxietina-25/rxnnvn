#include <iostream>
#include <string>

using namespace std;

int main() {
    int pass, roles, chcgn;
    string user, choice, prole, proleatt;
    char choice2;

    // Welcome text with instructions 
    cout << "Welcome to ADVENTURE ACADEMY, PLAYER! Please sign-up or log-in first!" << endl;
    cout << "FOR PASSWORD: use 6 numerical password " << endl;

 // Choose whether signup or login
    while (true) {
        cout << "Please choose signup or login: ";
        cin >> choice;

        if (choice == "signup" || choice == "Signup") {
            cout << "Input your username: ";
            cin >> user;
            
            //choosing roles with password
            if (user == "ryvn" || user == "rxnn") {
                cout << "Congratulations! Choose your role now!" << endl;
                cout << "ROLES" << endl;
                cout << endl;
                cout << "1. SWORDSMAN" << endl;
                cout << "High physical damage, melee attacks, and often strong defensive capabilities." << endl;
                cout << endl;
                cout << "2. ARCHER" << endl;
                cout << "High ranged damage, accuracy, and sometimes mobility." << endl;
                cout << endl;
                cout << "3. MAGE" << endl;
                cout << "High magical damage, crowd control spells, and often low physical defenses." << endl;
                cout << endl;
                cout << "4. SUPPORT" << endl;
                cout << "Low damage output, healing and protective spells, and utility abilities." << endl;
                cout << endl;
                cout << "5. TANK" << endl;
                cout << "High health, high armor/resistance, and crowd control abilities." << endl;
                cout << endl;
                cout << "6. ASSASSIN" << endl;
                cout << "High burst damage, mobility, and often stealth or evasion abilities." << endl;
                cout << endl;
                cout << "Choose from 1-6: ";
                cin >> roles;

            switch (roles) {
            case 1:
            prole = "SWORDSMAN";
            cout << "You choose " << prole << " ! " << "You can now set your password now!" << endl;
            cout << "Enter password: ";
            cin >> pass;

                if (pass == 52502 || pass == 102503) {
                cout << "You're completely registered, PLAYER!!" << endl;
                } else {
                cout << "Please input a proper password!";
                }
             break;

           case 2 :
           prole = "ARCHER";
           cout << "You choose " << prole << " ! " << "You can now set your password now!" << endl;
           cout << "Enter password: ";
           cin >> pass;
               
               if ( pass ==152502  || pass == 102503) {
               cout << "You completely registered PLAYER!!" << endl;
               }
               else {
               cout << "Please input a proper password!";   
               }
            break;
           
           case 3:
           prole = "MAGE";
           cout << "You choose " << prole << " ! " << "You can now set your password now!" << endl;
           cout << "Enter password: ";
           cin >> pass;
               
               if ( pass == 152502  || pass == 102503) {
               cout << "You completely registered PLAYER!!" << endl;
               }
               else {
               cout << "Please input a proper password!";
                }
               break;
               
           case 4:
           prole = "SUPPORT";
           cout << "You choose " << prole << " ! " << "You can now set your password now!" << endl;
           cout << "Enter password: ";
           cin >> pass;
               
               if ( pass == 152502  || pass == 102503) {
               cout << "You completely registered PLAYER!!" << endl;
               }
               else {
               cout << "Please input a proper password!"; 
               }    
               break;
          
           case 5:
           prole = "TANK";
           cout << "You choose " << prole << " ! " << "You can now set your password now!" << endl;
           cout << "Enter password: ";
           cin >> pass;
               
               if ( pass == 152502  || pass == 102503) {
               cout << "You completely registered PLAYER!!" << endl;
               }
               else {
               cout << "Please input a proper password!"; 
               }
               break;
           
           case 6:
           prole = "ASSASSIN";
           cout << "You choose " << prole << " ! " << "You can now set your password now!" << endl;
           cout << "Enter password: ";
           cin >> pass;
               
               if ( pass == 152502  || pass == 102503) {
               cout << "You completely registered PLAYER!!" << endl;
               }
               else {
               cout << "Please input a proper password!"; 
               } 
              break;    
       
                    default:
                        cout << "Invalid role choice!";
                }
            } else {
                cout << "Please give a proper username...";
            }
        } 
        // loogging in
        else if (choice == "login" || choice == "Login") {
            cout << "Input your username: ";
            cin >> user;

            if (user == "ryvn" || user == "rxnn") {
                cout << "Enter your password: ";
                cin >> pass;
                
                
                if (pass == 152502 || pass == 102503) {
                    cout << "Welcome PLAYER! Claim your daily pass.";
                } else {
                    cout << "Wrong password! Try again " << endl;
                   }
            }
             else {
                cout << "Please give a proper username..." << endl;
            }
        } 
        else {
            cout << "Wrong choice! Choose only to signup or login!" << endl;
        }

        chcgn++;

        cout << "Do you want to sign-up or log-in again? (Y/N): ";
        cin >> choice2;

        if (choice2 != 'Y' && choice2 != 'y') {
            cout << "Okay! You can proceed now to the Adventure Game! Just follow the tutorial and have fun." ;
            break;
        }
    }

    return 0;
}