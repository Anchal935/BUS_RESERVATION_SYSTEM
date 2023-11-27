#include <stdio.h>
#include <string.h>

//=====all variables declaration====
int t_cost;
int bus_no;
int num_of_seats;
int seat_num[50];

//====all functions declaration====
void login(void);
int menu();
void display_bus_list(void);
void choose_bus(void);
void reservation_info(void);
void cancel_booking(void);
void exit_button();

//====all functions defintions====

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

//displaying main menu
int menu()
{
    int choice;

    printf("==============DISPLAYING MAIN MENU OPTIONS==============\n");

    printf("[1] VIEW BUS LIST\n");
    printf("[2] BOOK TICKETS\n");
    printf("[3] RESERVATION STATUS\n");
    printf("[4] CANCEL BOOKING\n");
    printf("[5] EXIT\n");

    printf("enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: //view_bus_list
        display_bus_list();
        printf("========================================================\n");
        break;
    
    case 2: //book tickets    
        display_bus_list();   
        printf("\n");
        choose_bus();
        break;
    
    case 3: //to_check_reservation_information
        reservation_info();
        break;

    case 4: //to_cancel_booking
        cancel_booking();
        break;

    case 5: //to_exit
        exit_button();
        return 1;
        break;

    default:
        printf("SORRY FOR INCONVENIENCE ;(\n");
        printf("Please Enter Correct Choice : \n ");
        break;
    }
    return 0;
}

// function for displaying bus list 
void display_bus_list(void)
{
    printf("--------------------------------------------------------------------------------------------\n");
    printf("S.No    BUS NUMBER    BUS NAME               ROUTES                   DATE       TIME        CHARGES\n");
    printf("--------------------------------------------------------------------------------------------\n");
    printf("1       1001        Bedi Travels         Delhi To Dharamshala       09/01/2024   6:00 PM      Rs.500\n");
    printf("2       1002        Ganga Travels        Delhi To Haridwar          10/10/2023   4:00 PM      Rs.250\n");
    printf("3       1003        Sai Baba Travels     Delhi To Shirdi            09/11/2023   10:00 AM     Rs.600\n");
    printf("4       1004        Mayur Travels        Ghaziabad To Saharanpur    05/11/2023   7:00 PM      Rs.200\n");
    printf("5       1005        Shree Travels        Ghaziabad To Meerut        09/12/2023   6:00 AM      Rs.150\n");
    printf("6       1006        Shiv Ganga Travels   Delhi To Rishikesh         01/10/2023   3:00 PM      Rs.200\n");
    printf("7       1007        Super Deluxe         Saharanpur To Delhi        13/11/2023   9:00 AM      Rs.300\n");
    printf("8       1008        Shine On Travels     Saharanpur To Meerut       15/12/2023   2:00 PM      Rs.50\n");
    printf("9       1009        Shree Travels        Dehradun To Saharanpur     16/11/2023   10:00 AM     Rs.800\n");
    printf("10      1010        Rajjo Travels        Dehradun To Mumbai         31/12/2023   11:00 AM     Rs.900\n");

}

// function to choose bus number 
void choose_bus(void)
{
    extern int bus_no;   
    printf("ENTER YOUR BUS NUMBER : ");
    scanf("%d", &bus_no);
    
    if(bus_no>=1001 && bus_no<=1010)
    {
    switch (bus_no)
    {
    case 1001 :      
        printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

        printf("-----------------------------------------------\n");
        printf(" 01. EMPTY    02. NAVL    03. NAVL    04. EMPTY \n");
        printf(" 05. NAVL     06. NAVL    07. NAVL    08. EMPTY \n");
        printf(" 09. EMPTY    10. NAVL    11. NAVL    12. NAVL \n");
        printf(" 13. NAVL     14. NAVL    15. EMPTY   16. EMPTY \n");
        printf(" 17. EMPTY    18. NAVL    19. NAVL    20. NAVL \n");
        printf("-----------------------------------------------\n");
        break;

    case 1002 :
        printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

        printf("-----------------------------------------------\n");
        printf(" 01. NAVL    02. NAVL    03. NAVL    04. EMPTY \n");
        printf(" 05. NAVL    06. EMPTY   07. EMPTY   08. EMPTY \n");
        printf(" 09. EMPTY   10. NAVL    11. NAVL    12. NAVL \n");
        printf(" 13. NAVL    14. NAVL    15. EMPTY   16. EMPTY \n");
        printf(" 17. EMPTY   18. EMPTY   19. NAVL    20. NAVL \n");
        printf("----------------------------------------------\n");
        break;

        case 1003 :
        printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

        printf("------------------------------------------------\n");
        printf(" 01. NAVL    02. EMPTY    03. NAVL    04. EMPTY \n");
        printf(" 05. NAVL    06. EMPTY    07. NAVL    08. NAVL \n");
        printf(" 09. NAVL    10. NAVL     11. NAVL    12. NAVL \n");
        printf(" 13. NAVL    14. EMPTY    15. EMPTY   16. EMPTY \n");
        printf(" 17. EMPTY   18. EMPTY    19. NAVL    20. EMPTY \n");
        printf("------------------------------------------------\n");
        break;

        case 1004 :
        printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

        printf("------------------------------------------------\n");
        printf(" 01. EMPTY    02. EMPTY    03. NAVL    04. EMPTY \n");
        printf(" 05. NAVL     06. EMPTY    07. EMPTY   08. NAVL \n");
        printf(" 09. EMPTY    10. NAVL     11. NAVL    12. NAVL \n");
        printf(" 13. NAVL     14. EMPTY    15. EMPTY   16. EMPTY \n");
        printf(" 17. EMPTY    18. EMPTY    19. EMPTY   20. EMPTY \n");
        printf("------------------------------------------------\n");
        break;

        case 1005 :
        printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

        printf("------------------------------------------------\n");
        printf(" 01. NAVL    02. EMPTY    03. NAVL    04. EMPTY \n");
        printf(" 05. EMPTY   06. EMPTY    07. EMPTY   08. EMPTY \n");
        printf(" 09. EMPTY   10. NAVL     11. NAVL    12. NAVL \n");
        printf(" 13. NAVL    14. NAVL     15. EMPTY   16. EMPTY \n");
        printf(" 17. EMPTY   18. NAVL     19. NAVL    20. EMPTY \n");
        printf("------------------------------------------------\n");
        break;

        case 1006 :
        printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

        printf("------------------------------------------------\n");
        printf(" 01. NAVL    02. NAVL    03. NAVL    04. EMPTY \n");
        printf(" 05. NAVL    06. NAVL    07. NAVL    08. EMPTY \n");
        printf(" 09. NAVL    10. NAVL    11. NAVL    12. NAVL \n");
        printf(" 13. NAVL    14. EMPTY   15. EMPTY   16. EMPTY \n");
        printf(" 17. EMPTY   18. EMPTY   19. NAVL    20. NAVL \n");
        printf("------------------------------------------------\n");
        break;

        case 1007 :
        printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

        printf("------------------------------------------------\n");
        printf(" 01. EMPTY   02. NAVL    03. EMPTY   04. EMPTY \n");
        printf(" 05. NAVL    06. EMPTY   07. NAVL    08. NAVL \n");
        printf(" 09. NAVL    10. NAVL    11. NAVL    12. NAVL \n");
        printf(" 13. NAVL    14. EMPTY   15. EMPTY   16. NAVL \n");
        printf(" 17. EMPTY   18. NAVL    19. NAVL    20. NAVL \n");
        printf("------------------------------------------------\n");
        break;

        case 1008 :
        printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

        printf("------------------------------------------------\n");
        printf(" 01. EMPTY   02. NAVL    03. EMPTY   04. EMPTY \n");
        printf(" 05. NAVL    06. EMPTY   07. NAVL    08. NAVL \n");
        printf(" 09. NAVL    10. NAVL    11. NAVL    12. NAVL \n");
        printf(" 13. NAVL    14. EMPTY   15. EMPTY   16. EMPTY \n");
        printf(" 17. EMPTY   18. NAVL    19. NAVL    20. EMPTY \n");
        printf("------------------------------------------------\n");
        break;

        case 1009 :
        printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

        printf("------------------------------------------------\n");
        printf(" 01. EMPTY   02. NAVL    03. NAVL    04. NAVL \n");
        printf(" 05. NAVL    06. EMPTY   07. NAVL    08. EMPTY \n");
        printf(" 09. NAVL    10. NAVL    11. EMPTY   12. NAVL \n");
        printf(" 13. EMPTY   14. EMPTY   15. EMPTY   16. EMPTY \n");
        printf(" 17. NAVL    18. NAVL    19. NAVL    20. EMPTY \n");
        printf("------------------------------------------------\n");
        break;

        case 1010 :
        printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

        printf("------------------------------------------------\n");
        printf(" 01. EMPTY   02. NAVL    03. NAVL    04. NAVL \n");
        printf(" 05. EMPTY   06. EMPTY   07. NAVL    08. EMPTY \n");
        printf(" 09. EMPTY   10. NAVL    11. EMPTY   12. NAVL \n");
        printf(" 13. EMPTY   14. EMPTY   15. EMPTY   16. EMPTY \n");
        printf(" 17. NAVL    18. NAVL    19. NAVL    20. NAVL \n");
        printf("------------------------------------------------\n");
        break;

    }

    FILE *fptr1;
    fptr1 = fopen("person_name.txt", "w");

    if(fptr1 == NULL)
    {
        printf("Error opening file :(");
    }

    extern int num_of_seats;
    extern int seat_num[50];
    char person_names[500];

    printf("========================================================\n");
    printf("No. of seats you need to book : ");
    scanf("%d", &num_of_seats);

    printf("Enter the seat number : ");
    for(int i=1; i<=num_of_seats; i++)
    {
        scanf("%d", &seat_num[i]);
    }

    while (getchar() != '\n');

    for(int i=1; i<=num_of_seats; i++)
    {
        printf("Enter the Person Name %d : ",i);
        scanf("%s",person_names);  
        fprintf(fptr1,"%s\t",person_names);
    }

    fclose(fptr1);
    fflush(stdout);

    printf("\n");
    printf("========================================================\n");

    //payment function
    reservation_info();
}
    else
    {
        printf("No searches found :( \n");
        printf("Please enter valid bus number\n");
        display_bus_list();   
        printf("\n");

        extern int bus_no;
        printf("ENTER YOUR BUS NUMBER : ");
        scanf("%d", &bus_no);

        switch (bus_no)
        {
        case 1001 :
            printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

            printf("-----------------------------------------------\n");
            printf(" 01. EMPTY    02. NAVL    03. NAVL    04. EMPTY \n");
            printf(" 05. NAVL     06. NAVL    07. NAVL    08. EMPTY \n");
            printf(" 09. EMPTY    10. NAVL    11. NAVL    12. NAVL \n");
            printf(" 13. NAVL     14. NAVL    15. EMPTY   16. EMPTY \n");
            printf(" 17. EMPTY    18. NAVL    19. NAVL    20. NAVL \n");
            printf("-----------------------------------------------\n");
            break;
        

        case 1002 :
            printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

            printf("-----------------------------------------------\n");
            printf(" 01. NAVL    02. NAVL    03. NAVL    04. EMPTY \n");
            printf(" 05. NAVL    06. EMPTY   07. EMPTY   08. EMPTY \n");
            printf(" 09. EMPTY   10. NAVL    11. NAVL    12. NAVL \n");
            printf(" 13. NAVL    14. NAVL    15. EMPTY   16. EMPTY \n");
            printf(" 17. EMPTY   18. EMPTY   19. NAVL    20. NAVL \n");
            printf("----------------------------------------------\n");
            break;

            case 1003 :
            printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

            printf("------------------------------------------------\n");
            printf(" 01. NAVL    02. EMPTY    03. NAVL    04. EMPTY \n");
            printf(" 05. NAVL    06. EMPTY    07. NAVL    08. NAVL \n");
            printf(" 09. NAVL    10. NAVL     11. NAVL    12. NAVL \n");
            printf(" 13. NAVL    14. EMPTY    15. EMPTY   16. EMPTY \n");
            printf(" 17. EMPTY   18. EMPTY    19. NAVL    20. EMPTY \n");
            printf("------------------------------------------------\n");
            break;

            case 1004 :
            printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

            printf("------------------------------------------------\n");
            printf(" 01. EMPTY    02. EMPTY    03. NAVL    04. EMPTY \n");
            printf(" 05. NAVL     06. EMPTY    07. EMPTY   08. NAVL \n");
            printf(" 09. EMPTY    10. NAVL     11. NAVL    12. NAVL \n");
            printf(" 13. NAVL     14. EMPTY    15. EMPTY   16. EMPTY \n");
            printf(" 17. EMPTY    18. EMPTY    19. EMPTY   20. EMPTY \n");
            printf("------------------------------------------------\n");
            break;

            case 1005 :
            printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

            printf("------------------------------------------------\n");
            printf(" 01. NAVL    02. EMPTY    03. NAVL    04. EMPTY \n");
            printf(" 05. EMPTY   06. EMPTY    07. EMPTY   08. EMPTY \n");
            printf(" 09. EMPTY   10. NAVL     11. NAVL    12. NAVL \n");
            printf(" 13. NAVL    14. NAVL     15. EMPTY   16. EMPTY \n");
            printf(" 17. EMPTY   18. NAVL     19. NAVL    20. EMPTY \n");
            printf("------------------------------------------------\n");
            break;

            case 1006 :
            printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

            printf("------------------------------------------------\n");
            printf(" 01. NAVL    02. NAVL    03. NAVL    04. EMPTY \n");
            printf(" 05. NAVL    06. NAVL    07. NAVL    08. EMPTY \n");
            printf(" 09. NAVL    10. NAVL    11. NAVL    12. NAVL \n");
            printf(" 13. NAVL    14. EMPTY   15. EMPTY   16. EMPTY \n");
            printf(" 17. EMPTY   18. EMPTY   19. NAVL    20. NAVL \n");
            printf("------------------------------------------------\n");
            break;

            case 1007 :
            printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

            printf("------------------------------------------------\n");
            printf(" 01. EMPTY   02. NAVL    03. EMPTY   04. EMPTY \n");
            printf(" 05. NAVL    06. EMPTY   07. NAVL    08. NAVL \n");
            printf(" 09. NAVL    10. NAVL    11. NAVL    12. NAVL \n");
            printf(" 13. NAVL    14. EMPTY   15. EMPTY   16. NAVL \n");
            printf(" 17. EMPTY   18. NAVL    19. NAVL    20. NAVL \n");
            printf("------------------------------------------------\n");
            break;

            case 1008 :
            printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

            printf("------------------------------------------------\n");
            printf(" 01. EMPTY   02. NAVL    03. EMPTY   04. EMPTY \n");
            printf(" 05. NAVL    06. EMPTY   07. NAVL    08. NAVL \n");
            printf(" 09. NAVL    10. NAVL    11. NAVL    12. NAVL \n");
            printf(" 13. NAVL    14. EMPTY   15. EMPTY   16. EMPTY \n");
            printf(" 17. EMPTY   18. NAVL    19. NAVL    20. EMPTY \n");
            printf("------------------------------------------------\n");
            break;

            case 1009 :
            printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

            printf("------------------------------------------------\n");
            printf(" 01. EMPTY   02. NAVL    03. NAVL    04. NAVL \n");
            printf(" 05. NAVL    06. EMPTY   07. NAVL    08. EMPTY \n");
            printf(" 09. NAVL    10. NAVL    11. EMPTY   12. NAVL \n");
            printf(" 13. EMPTY   14. EMPTY   15. EMPTY   16. EMPTY \n");
            printf(" 17. NAVL    18. NAVL    19. NAVL    20. EMPTY \n");
            printf("------------------------------------------------\n");
            break;

            case 1010 :
            printf("Here, Empty -> AVAILABLE SEATS & NAVL -> NOT AVAILABLE SEATS for booking seat number\n");

            printf("------------------------------------------------\n");
            printf(" 01. EMPTY   02. NAVL    03. NAVL    04. NAVL \n");
            printf(" 05. EMPTY   06. EMPTY   07. NAVL    08. EMPTY \n");
            printf(" 09. EMPTY   10. NAVL    11. EMPTY   12. NAVL \n");
            printf(" 13. EMPTY   14. EMPTY   15. EMPTY   16. EMPTY \n");
            printf(" 17. NAVL    18. NAVL    19. NAVL    20. NAVL \n");
            printf("------------------------------------------------\n");
            break;
        }

        FILE *fptr1;
        fptr1 = fopen("person_name.txt", "w");

        if(fptr1 == NULL)
        {
            printf("Error opening file :(");
        }

        extern int num_of_seats;
        extern int seat_num[50];
        char person_names[500];

        printf("========================================================\n");
        printf("No. of seats you need to book : ");
        scanf("%d", &num_of_seats);

        printf("Enter the seat number : ");
        for(int i=1; i<=num_of_seats; i++)
        {
            scanf("%d", &seat_num[i]);
        }

        while (getchar() != '\n');

        for(int i=1; i<=num_of_seats; i++)
        {
            printf("Enter the Person Name %d : ",i);
            scanf("%s",person_names);
            fprintf(fptr1,"%s\t",person_names);
        }

        fclose(fptr1);
        fflush(stdout);

        printf("\n");
        printf("================================================================================\n");

        reservation_info();
    }
}

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

// function for cancel booking 
void cancel_booking(void)
{
    int reservation_num = 23459;
    int reserve_no;
    char ch ='Y';
    char ch1;
    
    printf("Please Enter Your RESERVATION NUMBER : ");
    scanf("%d",&reserve_no);
    
    if(reserve_no == reservation_num)
    {
        printf("Are You Sure To Cancel Your Ticket[Y/N] : ");
        while (getchar() != '\n');
        
        scanf("%c",&ch1);
            if(ch == ch1)
            {
                printf("YOUR RESERVATION HAS BEEN CANCEL !!\n");
            }
            else
            {
                printf("YOUR RESERVATION CANCELATION HAS BEEN DENIED\n");
            }
    }
    
    else
    {
        printf("NOT FOUND!! ENTER THE CORRECT RESERVATION NUMBER : ");
        scanf("%d",&reserve_no);
    
        if(reserve_no == reservation_num)
        {
            printf("Are You Sure To Cancel Your Ticket[Y/N] : ");
            while (getchar() != '\n');
            
            scanf("%c", &ch1);
            
                if(ch == ch1)
                {
                    printf("YOUR RESERVATION HAS BEEN CANCEL !!\n");
                }
                else
                {
                    printf("YOUR RESERVATION CANCELATION HAS BEEN DENIED\n");
                }
        }
    }
    
    menu();
}

// function for exit button
void exit_button()
{
    printf("Thanks to visit our site :)");
}

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

