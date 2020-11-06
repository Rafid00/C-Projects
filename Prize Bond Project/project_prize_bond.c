#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int lineCountPB = 0, lineCountOPB = 0;
    FILE *f = fopen("prizebond1.txt", "r");
    char c = fgetc(f);

    if(f)
    {
        printf("\nopened!\n");
    }
    else
    {
        printf("\nfailed to open!\n");
    }
    
    while (c != -1)
    {
        if (c == '\n')
        {
            lineCountPB++;
        }
        c = fgetc(f);
    }

    fclose(f);

    f = fopen("owned_prize_bond.txt", "r");

    c = fgetc(f);

    while (c != -1)
    {
        if (c == '\n')
        {
            lineCountOPB++;
        }
        c = fgetc(f);
    }

    fclose(f);

    char opbName[20], pbName[20];

    FILE *g;

    f = fopen("owned_prize_bond.txt", "r");
    for (int i = 0; i <= lineCountOPB; i++)
    {
        fscanf(f, "%s", opbName);
        g = fopen("prizebond1.txt", "r");
        for (int j = 0; j <= lineCountPB; j++)
        {
            fscanf(g, "%s", pbName);
            if (strcmp(opbName, pbName) == 0)
            {
                printf("\n\tMatch Found ! \"%s\" \n", opbName);
            }
        }
    }
    printf("\n");
    getch();
}