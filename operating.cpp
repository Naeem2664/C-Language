#include <stdio.h> 
#include <iostream>
#include<fstream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
     while (true)
     {     
     char newuser[50];
     char newpasswd[50];
     char signup[] = "sign";
     char commands[50];
     char game[] = "game";
     char username[50];
     char calc[] = "calculator";
     char user[] = "Autopilot";
     char pass[] = "autopilot";
     char file[] = "file";
     char server[] = "show";
     char smd[] = "trojan";
     float addnumi;
     float addnumii;
     int flob;
     char password[50];
     time_t now;
     time(&now);
epic:
     printf("%s", ctime(&now));
     cout << "____________\n";
     cout << "    Autopilot beta OS v.1.0\n      \n";
     cout << "____________\n";
     cout << "Created and developed by Ali Muhammad .This program may have some minor bugs.\n";
     cout << "Please report any bugs found to Autopilot.";
     cout << "\n\n\n";
     cout << "_____\n";
     cout << "Authentication\n";
     cout << "______\n";
     cout << "Username: \n";
     cin >> username;
     cin.ignore();
     cout << "Password: \n";
     cin >> password;
     cin.ignore();
     if (strcmp(username, user) == 0 && strcmp(password, pass) == 0)
     {
     back:
          cout << "Loged in as superuser\n";
          cout << "Welcome to Autopilot OS\nCommand: ";
          cin >> commands;

          if (strcmp(commands, file) == 0)
          {
               string choice;
               int command;
               cout << "Enter Your Command:\n";
               cout<<"1. Create an empty file\n";
               cout<<"2. Read from file\n";
               cin >> command;
               switch (command)
               {
                    case 1:
                    {

                    string write = "My name is Ali Muhamamd  and I'm a student.";
                    ofstream File("MyFile.txt");
                    cout << "Your file has been created successfully with example text" << endl;
                    File << write;
                    File.close();
                    }
                    break;
          
               case 2:
               {
                    string Text;
                    ifstream Read("MyFile.txt");
                    while (getline(Read, Text))
                    {
                         cout << Text;
                    }
               }
                    break;
               default:
                    cout << "Invalid command";
                    break;

                    }


          if (strcmp(commands, calc) == 0)
          {
               cout << "Welcome to simple calculator\n";
               cout << "1.Addition\n";
               cout << "2.Substraction\n";
               cout << "3.Multiplication\n";
               cout << "4.Division\n";
               cout << "5.About calculator\n";
               cin >> flob;
               switch (flob)
               {
               case 1:
                    cout << "Enter 1st number : ";
                    cin >> addnumi;
                    cout << "Enter 2nd Number:";
                    cin >> addnumii;
                    cout << "You're answer is " << addnumi + addnumii << endl;
                    cin.get();
                    goto back;
                    break;
               case 2:
                    cout << "Enter 1st number: ";
                    cin >> addnumi;
                    cout << "Enter 2nd number: ";
                    cin >> addnumii;
                    cout << "You're answer is: " << addnumi - addnumii << endl;
                    cin.get();
                    goto back;
                    break;
               case 3:
                    cout << "Enter 1st number: \n";
                    cin >> addnumi;
                    cout << "Enter 2nd number: \n";
                    cin >> addnumii;
                    cout << "You're answer is " << addnumi * addnumii << endl;
                    cin.get();
                    goto back;
                    break;
               case 4:
                    cout << "Enter 1st number: \n";
                    cin >> addnumi;
                    cout << "Enter 2nd number: \n";
                    cin >> addnumii;
                    cout << "You're answer is " << addnumi / addnumii << endl;
                    cin.get();
                    goto back;
                    break;
               case 5:
                    cout << "The creator and developer of this calculator is Cyberspace.\nCyberspace is an";
                    cout << " enthusiat but an intermediate C/C++ Programmer." << endl;
                    cout << "Cyberspace was the developer of the Simple OS\n\n\n";
                    cout << "The program may be redistrubuted and used \nin other programs no copyright acts will be violanted\n\n";
                    cout << "\n\n\n\n\n";
               }
               cin.get();
               goto epic;
          }
          if (strcmp(commands, game) == 0)
          {
               {
                    int menu;
                    char epic[100];
                    int start;
                    char command[50];
                    char deface[] = "quit";
                    char closing[] = "index";
                    char server[] = "show";
                    char twocommand[50];
               leg:
                    cout << "_________________\n";
                    cout << "       **Welcome to Autopilot-warfare**           \n";
                    cout << "      (By Autopilot Team)                        \n";
                    cout << "_________________\n";
                    cout << "\nPlease enter you're name:  ";
                    cin >> epic;
                    cin.ignore();
                    cout << "Welcome  " << epic << "\n";
                    cout << "Please select enter the number: \n";
                    cout << "1.Start\n";
                    cout << "2.Credits\n";
                    cin >> menu;
                    switch (menu)
                    {
                    case 1:
                    monster:
                         cout << "         Autopilot war vista OS    \n";
                         time_t now;
                         time(&now);
                         printf("%s", ctime(&now));
                         cout << "If you want an hint press cheat \n";
                         cout << "  Enter password: ";
                         cin >> start;
                         cin.ignore();
                         switch (start)
                         {
                         case 1:
                              cout << " The password is conecutive number from 1 to 3.  ";
                              cin.get();
                              goto monster;
                              break;
                         case 123:
                              cout << "You succsecfully loged on as Superuser\n";
                              cout << "\n";
                         server:
                              cout << "Enter Command: \n";
                              cin >> command;
                              if (strcmp(command, smd) == 0)
                              {
                                   cout << "Sterling trojan released intel disrupeted servers partially damaged\n";
                                   cin.get();
                                   goto server;
                                   if (strcmp(command, server) == 0)
                                   {
                                        cout << "Ip addresses:125.937.368 ; 98.678.156 ; 101.65.481 ;125.937.358 ; 99.678.156 ;\n121.65.481 ...\n";
                                        cin.get();
                                        goto server;
                                   }
                              }
                              if (strcmp(command, deface) == 0)
                              {
                                   cout << "Network connection closed\n";
                                   cout << "Servers Offline\n";
                                   cout << "Next comand: \n";
                                   cin >> twocommand;
                                   if (strcmp(twocommand, closing) == 0)
                                   {
                                        cout << "Deface page uploaded\n";
                                        cout << "Welcome to the new homepage: \n";
                                        cout << "_________________________\n";
                                        cout << "Mozilla firefox-Autopilot operating system.                                 \n";
                                        cout << "_________________________\n";
                                        cout << "_________________________\n";
                                        cout << "#\n";
                                        cout << "#\n";
                                        cout << " The website network servers are offline(You cannot log in)\n.........";
                                        cout << "___________________________\n";
                                        cin.get();
                                   }
                              }
                              cin.get();
                              break;
                         default:
                              cout << "System alert Ip taken: 127.0.0.1 System lockout for 101 hours ERROR.";
                              cin.get();
                         }
                         cin.get();
                         break;
                    case 2:
                         cout << "Credits\n";
                         cout << "Developer: Ali Muhammad\n";
                         cout << "beta tester:Muhamamd Naeem\n";
                         cout << "ASCII artist :Ali Muhammad\n";
                         cout << "Bug reporter:Team Autopilot\n";
                         cout << "_________________________\n";
                         cout << "This game is under developement please report any bug to the creator";
                         cout << "             \nAutopilot games present : Autopilot-warfare\n             \n";
                         cout << "              ______________                    \n";
                         goto leg;
                         cin.get();
                         break;
                    default:
                         cout << "Fatal System error Autopilot servers renconnecting....\nConnection failure System Virus detected swiping hard drive ";
                         cin.get();
                         break;
                    }

                    cin.get();
               }

               cin.get();
               goto back;
          }

          cin.get();
     }
}
}
}