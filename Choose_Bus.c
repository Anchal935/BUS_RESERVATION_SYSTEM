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
