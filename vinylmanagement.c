//Start of program//

//Importing header files//
#include <stdio.h>
#include <stdlib.h>

//User defined functions//
void insert();
void search();

//Creating structure for easier data management//
struct vin
{
    int vcode;
    char name[50];
    char artist[50];
};
struct vin s;
void main()
{
    int choice;
    while (choice != 3)
    {
        printf("\n\n");
        printf("\t'WELCOME TO MUSIC VINYL COLLECTION DATABASE'\n\n\n");             //Part to be displayed to the end user//

        printf("\t\tAvailable Options\n\n");
        printf("\t\t1: Insert vinyl storage record\n");
        printf("\t\t2: Search vinyl storage record\n");
        printf("\t\t3: Exit\n\n");
        printf("\t\tEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)             //Switch case to load the appropriate part of the program as per the user's choice//
        {
        case 1:
            insert(); 
            break;
        case 2:
            search();
            break;
        case 3:
            exit(1);
            break;

        default:
            printf("\n\t\tPlease select a valid option.\n\n");
        }
    }
}

void insert()           //part of the program to allow the user to enter data//
{
    FILE *fp;
    fp = fopen("vinyl.txt", "a+");
    printf("\n\n\t\tENTER NEW MUSIIC VINYL DATA");
    printf("\n\n\t\tEnter vinyl Code : ");
    scanf("%d", &s.vcode);
    fflush(stdin);
    printf("\n\t\tEnter vinyl/album Name : ");
    scanf("%s",&s.name);
    printf("\n\t\tEnter Artist Name : ");
    scanf("%s",&s.artist);
    fwrite(&s, sizeof(s), 1, fp);
    {
        printf("\n\n\tVinyl Database Recorded Successfully!\n");
    }
    fclose(fp);
    printf("\n\t\tRecord Updated!\n\n");
}

void search()       //part of the program to allow the user to search data//
{
    int code, flag = 0;
    FILE *fp;
    fp = fopen("vinyl.txt", "r");
    if (fp == NULL)
    {
        printf("\n\t\tError: file not found.");
        return;
    }
    printf("\n\n\tEnter vinyl code to be searched: ");
    scanf("%d", &code);
    while (fread(&s, sizeof(s), 1, fp) > 0 && flag == 0)
    {
        if (s.vcode == code)
        {
            flag = 1;
            printf("\n\nHere are the search results:");
            printf("\nVinyl Code: %d", s.vcode);
            printf("\nName of the album: %s",s.name);
            printf("\nName of The artist: %s\n\n",s.artist);
        }
    }
    if (flag == 0)
    {
        printf("\n\n\t\tError: No record found.\n\n");
    }
    fclose(fp);
}

//End of the program//