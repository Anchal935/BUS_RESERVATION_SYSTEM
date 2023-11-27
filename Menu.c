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
