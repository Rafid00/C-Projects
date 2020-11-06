#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <dos.h>
#include <time.h>

typedef struct
{
    char vehicle_type[20];
    char dep_class[13];
    char ret_class[13];
} vehicle;

typedef struct
{
    char name[25];
    char travel_from[25];
    char travel_to[25];
    vehicle vehicles;
    char trip_type[15];
    int departure_date[3];
    int returning_date[3];
} travel;

typedef struct
{
    char name[25];
    char phone_number[16];
    char email[30];
    int age;
    char gender[13];

} user;

//functions

void greeting()
{
    printf("\n\n\n\n\n\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2                                     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2                                     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2               WELCOME               \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2          Project - NeGaTivE         \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2                                     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Travel & Tourism Management Project \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2                                     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2                                     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2                                     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n");

    system("pause");
}

char mainMenu()
{
    char choice;

    while (1)
    {
        system("cls");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\t\t\t\t\t[ Press The Character In Order To Select ]");
        printf("\n\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 (Enter - A) Add A User\n\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 (Enter - B) Add Traveling Details\n\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 (Enter - C) View Records\n\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 (Enter - D) Search A User\n\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 (Enter - E) Remove A User\n\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 (Enter - F) Edit A User\n\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 (Enter - G) Edit Travel Details\n\n\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 (Enter - H) Exit\n\n");
        printf("\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
        choice = getche();
        choice = toupper(choice);
        if (choice == 'A' || choice == 'B' || choice == 'C' || choice == 'D' || choice == 'E' || choice == 'F' || choice == 'G' || choice == 'H')
            break;
    }

    return choice;
}

void newUser()
{
    int usercount = 0;
    user users;
    system("cls");
    fflush(stdin);
    printf("\n\tName: ");
    gets(users.name);
    printf("\n\tPhone No.: ");
    fflush(stdin);
    gets(users.phone_number);
    printf("\n\tEmail Address: ");
    fflush(stdin);
    gets(users.email);
    printf("\n\tAge: ");
    scanf("%ld", &users.age);
    printf("\n\tGender: ");
    fflush(stdin);
    gets(users.gender);

    FILE *f = fopen("user.bin", "ab+");
    fwrite(&users, sizeof(user), 1, f);
    fclose(f);

    f = fopen("userCount.txt", "r");
    fscanf(f, "%d", &usercount);
    fclose(f);

    usercount++;

    f = fopen("userCount.txt", "w");
    fprintf(f, "%d", usercount);
    fclose(f);
}

void newTravel()
{
    int x;
    travel traveller;

    int usercount, travelcount;
    FILE *f = fopen("userCount.txt", "r");
    fscanf(f, "%d", &usercount);
    fclose(f);
    user users[usercount];
    f = fopen("user.bin", "rb");
    fread(users, sizeof(user), usercount, f);
    fclose(f);

    system("cls");
    printf("\n\tName ( Enter The Name As Your Profile ): ");
    fflush(stdin);
    gets(traveller.name);

    for (int i = 0; i < usercount; i++)
    {
        if (strcmp(users[i].name, traveller.name) == 0)
        {
            printf("\n\tTraveling From: ");
            fflush(stdin);
            gets(traveller.travel_from);
            printf("\n\tTraveling To: ");
            fflush(stdin);
            gets(traveller.travel_to);
            printf("\n\tWhich Vehicle ( Airplane / Bus / Train ): ");
            fflush(stdin);
            gets(traveller.vehicles.vehicle_type);
            printf("\n\tTrip Type? ( One Way Trip / Round Trip ): ");
            fflush(stdin);
            gets(traveller.trip_type);
            printf("\n\tDeparture Date?\n");
            printf("\n\tDay: ");
            fflush(stdin);
            scanf("%d", &traveller.departure_date[0]);
            printf("\n\tMonth: ");
            fflush(stdin);
            scanf("%d", &traveller.departure_date[1]);
            printf("\n\tYear: ");
            scanf("%d", &traveller.departure_date[2]);
            fflush(stdin);
            printf("\n\tDepature Fight Ticket Class ( Business / Economy ): ");
            gets(traveller.vehicles.dep_class);
            if (strcmp(strlwr(traveller.trip_type), "round trip") == 0)
            {
                printf("\n\tReturning Date?\n");
                printf("\n\tDay: ");
                fflush(stdin);
                scanf("%d", &traveller.returning_date[0]);
                printf("\n\tMonth: ");
                fflush(stdin);
                scanf("%d", &traveller.returning_date[1]);
                printf("\n\tYear: ");
                fflush(stdin);
                scanf("%d", &traveller.returning_date[2]);
                printf("\n\tReturn Fight Ticket Class ( Business / Economy ): ");
                fflush(stdin);
                gets(traveller.vehicles.ret_class);
            }

            FILE *f = fopen("travel.bin", "ab");
            fwrite(&traveller, sizeof(travel), 1, f);
            fclose(f);

            f = fopen("travelCount.txt", "r");
            fscanf(f, "%d", &travelcount);
            fclose(f);

            travelcount++;

            f = fopen("travelCount.txt", "w");
            fprintf(f, "%d", travelcount);
            fclose(f);
            x++;
        }
    }
    if (x == 0)
    {
        printf("\nThe Name Not Found. First Create A User, Then Add Travel Details Using That Name");
        getch();
    }
}

void viewRecords()
{
    system("cls");
    int usercount, travelcount, x, j;
    FILE *f = fopen("userCount.txt", "r");
    fscanf(f, "%d", &usercount);
    fclose(f);
    user users[usercount];
    f = fopen("travelCount.txt", "r");
    fscanf(f, "%d", &travelcount);
    fclose(f);
    travel traveller[travelcount];
    f = fopen("travel.bin", "rb");
    fread(&traveller, sizeof(travel), travelcount, f);
    fclose(f);

    f = fopen("user.bin", "rb");
    fread(users, sizeof(user), usercount, f);
    fclose(f);
    printf("*************************************************\n\n");
    for (int i = 0; i < usercount; i++)
    {

        printf("\xDB\xDB\xDB\xDB\xB2  User %d:", i + 1);
        printf("\n\n\tName: %s", users[i].name);
        printf("\n\tPhone No.: %s", users[i].phone_number);
        printf("\n\tEmail: %s", users[i].email);
        printf("\n\tAge: %d", users[i].age);
        printf("\n\tGender: %s", users[i].gender);

        for (j = 0; j < travelcount; j++)
        {
            if (strcmp(users[i].name, traveller[j].name) == 0)
            {
                printf("\n\t* Travel Details [ hidden ]");
                break;
            }
        }
        if (j == travelcount)
        {
            printf("\n\t* No Travel Details Found");
        }
        printf("\n\n*************************************************");
        printf("\n\n");
    }

    printf("*NOTE: To See The Travel Details Input The User Number & Input 0 To Go Back To The Menu");
    printf("\n\nInput: ");
    scanf("%d", &x);
    if (x != 0)
    {
        for (j = 0; j < travelcount; j++)
        {
            if (strcmp(users[x - 1].name, traveller[j].name) == 0)
            {
                break;
            }
        }
        printf("  Travel Details Of %s", traveller[j].name);
        printf("\n\tTraveling From: %s", traveller[j].travel_from);
        printf("\n\tTraveling To: %s", traveller[j].travel_to);
        printf("\n\tTraveling Vehicle: %s", traveller[j].vehicles.vehicle_type);
        printf("\n\tTraveling Type: %s", traveller[j].trip_type);
        printf("\n\tDeparture Fight Date: %d / %d / %d", traveller[j].departure_date[0], traveller[j].departure_date[1], traveller[j].departure_date[2]);
        printf("\n\tDepature Fight Ticket Class: %s", traveller[j].vehicles.dep_class);
        if (strcmp(strlwr(traveller[j].trip_type), "round trip") == 0)
        {
            printf("\n\tReturn Fight Date: %d / %d / %d", traveller[j].returning_date[0], traveller[j].returning_date[1], traveller[j].returning_date[2]);
            printf("\n\tReturn Fight Ticket Class: %s", traveller[j].vehicles.ret_class);
        }

        getch();
        viewRecords();
    }
}

void removeUser()
{
    system("cls");
    char name1[25];
    int usercount, travelcount, x = 0, y = 0;
    FILE *f = fopen("userCount.txt", "r");
    fscanf(f, "%d", &usercount);
    fclose(f);

    f = fopen("travelCount.txt", "r");
    fscanf(f, "%d", &travelcount);
    fclose(f);

    user users[usercount];
    travel traveller[travelcount];

    f = fopen("user.bin", "rb");
    fread(users, sizeof(user), usercount, f);
    fclose(f);

    f = fopen("travel.bin", "rb");
    fread(traveller, sizeof(travel), travelcount, f);
    fclose(f);

    printf("\nTo Remove A User, Input The Name Of The User [ It Will Remove The Travel Records Of The User If Any]\n");
    printf("\n\tInput: ");
    fflush(stdin);
    gets(name1);

    f = fopen("user.bin", "wb");

    for (int i = 0; i < usercount; i++)
    {
        if (strcmp(name1, users[i].name) == 0)
        {
            x++;
            continue;
        }
        else
        {
            fwrite(&users[i], sizeof(user), 1, f);
        }
    }
    fclose(f);

    f = fopen("travel.bin", "wb");

    for (int i = 0; i < travelcount; i++)
    {
        if (strcmp(name1, traveller[i].name) == 0)
        {
            y++;
            continue;
        }
        else
        {
            fwrite(&traveller[i], sizeof(travel), 1, f);
        }
    }

    fclose(f);

    if (x == 0)
    {
        printf("No Such User Found, Nothing Changed");
    }

    else if (x > 0)
    {
        usercount--;

        f = fopen("userCount.txt", "w");
        fprintf(f, "%d", usercount);
        fclose(f);
    }
    if (y > 0)
    {
        travelcount--;

        f = fopen("travelCount.txt", "w");
        fprintf(f, "%d", travelcount);
        fclose(f);
    }
}

void editUser()
{
    system("cls");
    char name1[25], replace[13], editStr[30];
    int usercount, x = 0, editDig;
    FILE *f = fopen("userCount.txt", "r");
    fscanf(f, "%d", &usercount);
    fclose(f);

    user users[usercount];

    f = fopen("user.bin", "rb");
    fread(users, sizeof(user), usercount, f);
    fclose(f);

    printf("\nInput The Name Of The User That You Want To Edit\n");
    printf("\n\n\tInput: ");
    fflush(stdin);
    gets(name1);
    printf("\nWhat Do You Want To Edit Of This User? (name / phone number / email / age / gender)\n");
    printf("\n\tinput: ");
    fflush(stdin);
    gets(replace);
    printf("\n\tWhat Data You Want in Replace? \n");
    printf("\n\tinput: ");
    fflush(stdin);
    if (strcmp(strlwr(replace), "age") == 0)
        scanf("%d", &editDig);
    else
        gets(editStr);

    f = fopen("user.bin", "wb");

    for (int i = 0; i < usercount; i++)
    {
        if (strcmp(name1, users[i].name) == 0)
        {
            if (strcmp(strlwr(replace), "name") == 0)
            {
                strcpy(users[i].name, editStr);
            }
            else if (strcmp(strlwr(replace), "phone number") == 0)
            {
                strcpy(users[i].phone_number, editStr);
            }
            else if (strcmp(strlwr(replace), "email") == 0)
            {
                strcpy(users[i].email, editStr);
            }
            else if (strcmp(strlwr(replace), "age") == 0)
            {
                users[i].age = editDig;
            }
            else if (strcmp(strlwr(replace), "gender") == 0)
            {
                strcpy(users[i].gender, editStr);
            }
            else
            {
                printf("Invalid Type !");
            }

            x++;
        }
        fwrite(&users[i], sizeof(user), 1, f);
    }
    fclose(f);
    if (x == 0)
    {
        printf("No Such User Found, Nothing Changed");
        getch();
    }
}

void searchUser()
{
    system("cls");
    char name1[30];
    int usercount, travelcount, x, j;
    FILE *f = fopen("userCount.txt", "r");
    fscanf(f, "%d", &usercount);
    fclose(f);
    user users[usercount];
    f = fopen("travelCount.txt", "r");
    fscanf(f, "%d", &travelcount);
    fclose(f);
    travel traveller[travelcount];
    f = fopen("travel.bin", "rb");
    fread(&traveller, sizeof(travel), travelcount, f);
    fclose(f);

    f = fopen("user.bin", "rb");
    fread(users, sizeof(user), usercount, f);
    fclose(f);

    printf("\nInput The Name Of The User You Are Looking For\n");
    printf("\n\tinput: ");
    fflush(stdin);
    gets(name1);

    for (int i = 0; i < usercount; i++)
    {
        if (strcmp(name1, users[i].name) == 0)
        {
            printf("\n\xDB\xDB\xDB\xDB\xB2   Info Of User: %s   \xDB\xDB\xDB\xDB\xB2 ", users[i].name);
            printf("\n\n\tName: %s", users[i].name);
            printf("\n\tPhone No.: %s", users[i].phone_number);
            printf("\n\tEmail: %s", users[i].email);
            printf("\n\tAge: %d", users[i].age);
            printf("\n\tGender: %s\n", users[i].gender);
            for (j = 0; j < travelcount; j++)
            {
                if (strcmp(users[i].name, traveller[j].name) == 0)
                {
                    break;
                }
            }
            if (j == travelcount)
            {
                printf("\n\t*No Travel Details Found");
            }
            else
            {
                printf("\n\n\xDB\xDB\xDB\xDB\xB2   Travel Details Of %s   \xDB\xDB\xDB\xDB\xB2", traveller[j].name);
                printf("\n\n\tTraveling From: %s", traveller[j].travel_from);
                printf("\n\tTraveling To: %s", traveller[j].travel_to);
                printf("\n\tTraveling Vehicle: %s", traveller[j].vehicles.vehicle_type);
                printf("\n\tTraveling Type: %s", traveller[j].trip_type);
                printf("\n\tDeparture Fight Date: %d / %d / %d", traveller[j].departure_date[0], traveller[j].departure_date[1], traveller[j].departure_date[2]);
                printf("\n\tDepature Fight Ticket Class: %s", traveller[j].vehicles.dep_class);
                if (strcmp(strlwr(traveller[j].trip_type), "round trip") == 0)
                {
                    printf("\n\tReturn Fight Date: %d / %d / %d", traveller[j].returning_date[0], traveller[j].returning_date[1], traveller[j].returning_date[2]);
                    printf("\n\tReturn Fight Ticket Class: %s", traveller[j].vehicles.ret_class);
                }
            }
            getch();
        }
    }
}

void editTravel()
{
    system("cls");
    char name1[25], replace[13], editStr[30];
    int travelcount, x = 0, editDig[3];
    FILE *f = fopen("travelCount.txt", "r");
    fscanf(f, "%d", &travelcount);
    fclose(f);

    travel traveller[travelcount];

    f = fopen("travel.bin", "rb");
    fread(traveller, sizeof(travel), travelcount, f);
    fclose(f);

    printf("\nInput The Name Of The User That You Want To Edit\n");
    printf("\n\n\tInput: ");
    fflush(stdin);
    gets(name1);
    printf("\nWhat Do You Want To Edit Of This User? \n");
    printf("\noptions : ( travel from / travel to / vehicle type / trip type / departure date / departure class / returning date / returning class )");
    printf("\n\n\tinput: ");
    fflush(stdin);
    gets(replace);
    printf("\n\tWhat Data You Want in Replace? \n");
    printf("\n\tinput: ");
    fflush(stdin);
    if (strcmp(strlwr(replace), "departure date") == 0 || strcmp(strlwr(replace), "returning date") == 0)
    {
        printf("\nDay: ");
        fflush(stdin);
        scanf("%d", &editDig[0]);
        printf("Month: ");
        fflush(stdin);
        scanf("%d", &editDig[1]);
        printf("Year: ");
        fflush(stdin);
        scanf("%d", &editDig[2]);
    }

    else if (strcmp(strlwr(replace), "trip type") == 0)
    {
        gets(editStr);
        if (strcmp(strlwr(editStr), "round trip") == 0)
        {
            printf("\nAs You Have Changed Trip Type To Round Trip, You Have To Add Returning Date");
            printf("\nReturning Date: ");
            printf("\n\n\tDay: ");
            fflush(stdin);
            scanf("%d", &editDig[0]);
            printf("\n\tMonth: ");
            fflush(stdin);
            scanf("%d", &editDig[1]);
            printf("\n\tYear: ");
            fflush(stdin);
            scanf("%d", &editDig[2]);
        }
    }
    else
    {
        gets(editStr);
    }

    f = fopen("travel.bin", "wb");

    for (int i = 0; i < travelcount; i++)
    {
        if (strcmp(name1, traveller[i].name) == 0)
        {
            if (strcmp(strlwr(replace), "travel from") == 0)
            {
                strcpy(traveller[i].travel_from, editStr);
            }
            else if (strcmp(strlwr(replace), "travel to") == 0)
            {
                strcpy(traveller[i].travel_to, editStr);
            }
            else if (strcmp(strlwr(replace), "vehicle type") == 0)
            {
                strcpy(traveller[i].vehicles.vehicle_type, editStr);
            }
            else if (strcmp(strlwr(replace), "departure class") == 0)
            {
                strcpy(traveller[i].vehicles.dep_class, editStr);
            }
            else if (strcmp(strlwr(replace), "returning class") == 0)
            {
                strcpy(traveller[i].vehicles.ret_class, editStr);
            }
            else if (strcmp(strlwr(replace), "trip type") == 0)
            {
                strcpy(traveller[i].trip_type, editStr);

                if (strcmp(strlwr(replace), "round trip") == 0)
                {
                    traveller[i].returning_date[0] = editDig[0];
                    traveller[i].returning_date[1] = editDig[1];
                    traveller[i].returning_date[2] = editDig[2];
                }
            }
            else if (strcmp(strlwr(replace), "departure date") == 0)
            {
                traveller[i].departure_date[0] = editDig[0];
                traveller[i].departure_date[1] = editDig[1];
                traveller[i].departure_date[2] = editDig[2];
            }
            else if (strcmp(strlwr(replace), "returning date") == 0)
            {
                traveller[i].returning_date[0] = editDig[0];
                traveller[i].returning_date[1] = editDig[1];
                traveller[i].returning_date[2] = editDig[2];
            }
            else
            {
                printf("Invalid Type !");
            }

            x++;
        }
        fwrite(&traveller[i], sizeof(travel), 1, f);
    }
    fclose(f);
    if (x == 0)
    {
        printf("No Such User Found, Nothing Changed");
        getch();
    }
}

//main function
int main()
{
    char choice;
    system("cls");
    greeting();

    do
    {
        choice = mainMenu();
        switch (choice)
        {
        case 'A':
            newUser();
            break;
        case 'B':
            newTravel();
            break;
        case 'C':
            viewRecords();
            break;
        case 'D':
            searchUser();
            break;
        case 'E':
            removeUser();
            break;
        case 'F':
            editUser();
            break;
        case 'G':
            editTravel();
            break;
        }
    } while (choice != 'H');
}
