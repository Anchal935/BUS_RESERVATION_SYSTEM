#include <stdio.h>
#include <string.h>

//=====all variables declaration====
int t_cost;
int bus_no;
int num_of_seats;
int seat_num[50];

//login function for a new user 
void login(void)
{
    char full_name[100];
    char username1[100];
    char emailId[100];
    char password1[100];

    //=========Click_here_to_Register:============ 
    printf("Enter your FULLNAME : ");
    fgets(full_name,100,stdin);
    printf("Enter your username : ");
    fgets(username1,100,stdin);
    printf("Enter your EmailId : ");
    fgets(emailId,100,stdin);
    printf("Enter your password : ");
    fgets(password1,100,stdin);
}
