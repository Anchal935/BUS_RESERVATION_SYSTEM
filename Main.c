#include "myfunctions.h"

//MAIN FUNCTION
int main()
{
    //Welcome window
    printf("==============  WELCOME TO TRAVEL TO GO  ===============\n"); 
    printf("============  HAPPY & SAFE JOURNEY AHEAD :)  ===========\n"); 
    printf("========================================================\n");

    //login window
    char uname[100] = "Anmol_Anchal";
    char pwd[100] = "codebind";
    int value;
    char username[100], password[100];

    printf("Enter your username : ");
    fgets(username,100, stdin);
    printf("Enter your password : ");
    fgets(password,100, stdin);

    password[strcspn(password, "\n")] = '\0';
    
    value = strcmp(pwd,password);

    if(value != 0)
    {
        printf("Not a user :( , Create a new Account!  \n");
        login();
    }
    else
    {
        printf("LOGGED IN SUCCESSFULLY! \n");
    }

    //main menu screen
    printf("========================================================\n");
    printf("======================BUS RESERVATION===================\n");
    printf("========================================================\n");
    printf("========================MAIN MENU=======================\n");
    menu(); 

    int exit_status = 0;

    while(!exit_status)
    {
        exit_status = menu();
    }
}
