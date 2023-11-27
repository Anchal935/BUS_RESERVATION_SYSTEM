#include <stdio.h>
#include <string.h>

//=====all variables declaration====
int t_cost;
int bus_no;
int num_of_seats;
int seat_num[50];

// function to book the tickets
void reservation_info(void)
{
    int acc_no, pin;
    int acc_no1, pin1;
    int reservation_num = 23459;
    extern int t_cost;

    FILE *fptr5, *fptr6;
    fptr5 = fopen("acc_no.txt", "r");
    fptr6 = fopen("pin_info.txt", "r");

    if(fptr5 == NULL)
    {
        printf("Error opening file :(");
    }

    if(fptr6 == NULL)
    {
        printf("Error opening file :(");
    }

    printf("==Please fill the details to proceed further for booking tickets==\n");
    fscanf(fptr5, "%d", &acc_no);
    fscanf(fptr6, "%d", &pin);
    printf("Enter your account number : ");
    scanf("%d", &acc_no1);

    if(acc_no1 == acc_no)
    {
        printf("enter ticket amount : ");
        scanf("%d", &t_cost);
        printf("enter your pin : ");
        scanf("%d", &pin1);

        if(pin == pin1)
        {
            printf("YOUR PAYMENT FOR TICKET BOOKING IS SUCCESSFUL ! \n");
            printf("YOUR RESERVATION NUMBER IS : %d \n", reservation_num);
            printf("PLEASE NOTE DOWN YOUR RESERVATION NUMBER FOR CANCEL BOOKED TICKETS \n");
            printf("========================================================\n");
            printf("========================MAIN MENU=======================\n");
        }

        else
        {
            printf("Entered pin is incorrect, please enter correct pin : ");
            scanf("%d", &pin1);
            printf("YOUR PAYMENT FOR TICKET BOOKING IS SUCCESSFUL !\n");
            printf("YOUR RESERVATION NUMBER IS : %d \n", reservation_num);
            printf("PLEASE NOTE DOWN YOUR RESERVATION NUMBER FOR CANCEL BOOKED TICKETS \n");
            printf("========================================================\n");
            printf("========================MAIN MENU=======================\n");
        }       
    }

    else
    {
        printf("Entered account number is incorrect, please enter correct account number : ");
        scanf("%d", &acc_no1);
        printf("enter ticket amount : ");
        scanf("%d", &t_cost);
        printf("enter your pin : ");
        scanf("%d", &pin1);

        if(pin == pin1)
        {
            printf("YOUR PAYMENT FOR TICKET BOOKING IS SUCCESSFUL !\n");
            printf("YOUR RESERVATION NUMBER IS : %d \n", reservation_num);
            printf("PLEASE NOTE DOWN YOUR RESERVATION NUMBER FOR CANCEL BOOKED TICKETS \n");
            printf("========================================================\n");
            printf("========================MAIN MENU=======================\n");
        }

        else
        {
            printf("Entered pin is incorrect, please enter correct pin : ");
            scanf("%d", &pin1);
            printf("YOUR PAYMENT FOR TICKET BOOKING IS SUCCESSFUL !\n");
            printf("YOUR RESERVATION NUMBER IS : %d \n", reservation_num);
            printf("PLEASE NOTE DOWN YOUR RESERVATION NUMBER FOR CANCEL BOOKED TICKETS \n");
            printf("========================================================\n");
            printf("========================MAIN MENU=======================\n");
        }  
    }

    FILE *fptr2 ;
        fptr2 = fopen("person_name.txt","r");

        if(fptr2 == NULL)
        {
            printf("Error opening file :(");
        }

        printf("[1] VIEW BUS LIST\n");
        printf("[2] BOOK TICKETS\n");
        printf("[3] RESERVATION INFO\n");
        printf("[4] CANCEL BOOKING\n");
        printf("[5] EXIT\n");

        int choice,reserv1;
        extern int num_of_seats;
        extern int seat_num[50];
        char names[500];
        extern int bus_no;
        extern int t_cost;

        printf("enter your choice : ");
        scanf("%d", &choice);

        if(choice == 3)
        {
            printf("Enter your reservation number : ");
            scanf("%d",&reserv1);

            if(reserv1 == reservation_num)
            {
                printf("YOUR RESERVATION NUMBER IS : %d\n", reserv1);
                fgets(names, 500, fptr2);

            fclose(fptr2);   

            printf("NAME : ");
            for(int i=0; names[i] != '\0'; i++)
            {
                printf("%c", names[i]);
            } 
            printf("\n");
            printf("BUS NUMBER : %d\n", bus_no);
            printf("SEAT NUMBER :  ");

            for(int i=1; i<=num_of_seats; i++)
            {
                printf("%d\t", seat_num[i]);
            } 
                printf("\n");
                printf("TICKET COST : %d\n", t_cost);
            }
        }     

    fclose(fptr5);
    fclose(fptr6);
}
