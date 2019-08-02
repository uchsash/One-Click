#include<stdio.h>
#include<malloc.h>

void fromto(int ft)
{
    if(ft == 1)
    {
        printf("Dhaka\n");
    }
    else if(ft==2)
    {
        printf("Khulna\n");
    }
    else if(ft== 3)
    {
        printf("Sylhet\n");
    }
}

void DtoK(int from, int to)
{

    float dk[3][3];
    dk[0][0] = 0;
    dk[0][1] = 40.2;
    dk[0][2] = 212;

    dk[1][0] = 40.2;
    dk[1][1] = 0;
    dk[1][2] = 184;

    dk[2][0] = 212;
    dk[2][1] = 184;
    dk[2][2] = 0;


    printf("\nThere is a 'Padma Resort' you can visit on the way. Are you interested?\nYes - 1, No - 2\n");
    int choice;
    scanf("%d", &choice);
    if(choice == 2 )
    {
        printf("Distance: %.1f km\n", dk[0][2]);
    }
    else
    {
        if(from == 1)
        {
            printf("From Dhaka to Padma Resort\nDistance: %.1fkm\n", dk[0][1]);
            printf("From Padma Resort to Khulna\nDistance: %.1fkm\n", dk[1][2]);
        }
        else
        {
            printf("From Khulna to Padma Resort\nDistance: %.1fkm\n", dk[2][1]);
            printf("From Padma Resort to Dhaka\nDistance: %.1fkm\n", dk[1][0]);
        }
    }
}

void DtoS(int from, int to)
{

    float dk[3][3];
    dk[0][0] = 0;
    dk[0][1] = 111;
    dk[0][2] = 235;

    dk[1][0] = 111;
    dk[1][1] = 0;
    dk[1][2] = 213;

    dk[2][0] = 235;
    dk[2][1] = 213;
    dk[2][2] = 0;


    printf("\nThere is a 'Shalban Vihara' you can visit on the way. Are you interested?\nYes - 1, No - 2\n");
    int choice;
    scanf("%d", &choice);
    if(choice == 2 )
    {
        printf("Distance: %.1f km\n", dk[0][2]);
    }
    else
    {
        if(from == 1)
        {
            printf("From Dhaka to Shalban Vihara\nDistance: %.1fkm\n", dk[0][1]);
            printf("From Shalban Vihara to Sylhet\nDistance: %.1fkm\n", dk[1][2]);
        }
        else
        {
            printf("From Sylhet to Shalban Vihara\nDistance: %.1fkm\n", dk[2][1]);
            printf("From Shalban Vihara to Dhaka\nDistance: %.1fkm\n", dk[1][0]);
        }
    }
}

int main()
{
    int from, to;
    int choice = 1;

    printf("Welcome to One Click!\n");
    printf("Your Trusted Digital Tour Guide\n\n");
    printf("Press -1 to exit. To continue, press 1\n\n");

    while(choice!=-1)
    {

        printf("Press respected number to choose respected city:\n");
        printf("->Dhaka - 1\n->Khulna - 2\n->Sylhet - 3\n");



        printf("\nFrom: ");
        scanf("%d", &from);


        printf("\nTo: ");

        scanf("%d", &to);


        printf("\nFrom: ");
        fromto(from);



        printf("\nTo: ");
        fromto(to);

        if((from == 1 || from == 2) && (to == 1 || to == 2))
        {
            DtoK(from, to);
        }
        else if((from == 1 || from == 3) && (to == 1 || to == 3))
        {
            DtoS(from, to);
        }
        else if((from == 2 || from == 3) && (to == 2 || to == 3))
        {
            if(from==2)
            {
                printf("You can't go directly from Khulna to Sylhet. You need to go there via Dhaka.");
                DtoK(from, 1);
                DtoS(1, to);
            }
            else if(from==3)
                        {
                            printf("You can't go directly from Sylhet to Khulna. You need to go there via Dhaka.");
                            DtoS(from, 1);
                            DtoK(1, to);
                        }
        }



        printf("\n\nPress -1 to exit. To continue, press 1\n");
        scanf("%d", &choice);
    }

    return 0;
}
