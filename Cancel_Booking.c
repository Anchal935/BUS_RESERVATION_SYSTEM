#include <stdio.h>
#include <string.h>

//=====all variables declaration====
int t_cost;
int bus_no;
int num_of_seats;
int seat_num[50];

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
