#include <stdio.h>
#include <stdlib.h>

char mat[10]={'0','1','2','3','4','5','6','7','8','9'};
int win();
void body();
int main()
{
    int player=1,i,mark;
    char ch;

    do
    {
        body();
        printf("\n\n");
        player=(player%2)?1:2;
        printf("\t\t\t\t\t   Player %d,enter the place: ",player);
         scanf("\t\t\t\t\t   %d",&ch);

        mark = (player == 1) ? 'X' : 'O';

        if(ch==1&& mat[1]=='1')
            mat[1]=mark;
        else if(ch==2 && mat[2]=='2')
            mat[2]=mark;
        else if(ch==3 && mat[3]=='3')
            mat[3]=mark;
        else if(ch==4 && mat[4]=='4')
            mat[4]=mark;
        else if(ch==5 && mat[5]=='5')
            mat[5]=mark;
        else if(ch==6 && mat[6]=='6')
            mat[6]=mark;
        else if(ch==7 && mat[7]=='7')
            mat[7]=mark;
        else if(ch==8 && mat[8]=='8')
            mat[8]=mark;
        else if(ch==9 && mat[9]=='9')
            mat[9]=mark;
        else
        {
            printf("\n\t\t\t\t\t\tInvalid move  ");
            player--;
            getch();
        }
        i=win();
        player++;
    }while(i==2);

    body();
    printf("\n\n");
    printf("\t\t\t\t\t   *************************\n\n");
        printf("\t\t\t\t\t\t");

    if(i==1)
        printf(" Player %d wins \n\n", --player);
    else
        printf(" game draw\n\n");

    printf("\t\t\t\t\t   *************************\n\n\n\n");
     return 0;
}
 int win()
 {
     if(mat[1]==mat[2]&&mat[2]==mat[3])
        return 1;
     else if(mat[4]==mat[5]&&mat[5]==mat[6])
        return 1;
     else if(mat[7]==mat[8]&&mat[8]==mat[9])
        return 1;
     else if(mat[1]==mat[4]&&mat[4]==mat[7])
        return 1;
    else if(mat[2]==mat[5]&&mat[5]==mat[7])
        return 1;
    else if(mat[3]==mat[6]&&mat[6]==mat[9])
        return 1;
    else if(mat[1]==mat[5]&&mat[5]==mat[9])
        return 1;

    else if(mat[3]==mat[5]&&mat[5]==mat[7])
        return 1;
    else if (mat[1] != '1' && mat[2] != '2' && mat[3] != '3' &&
        mat[4] != '4' && mat[5] != '5' && mat[6] != '6' && mat[7]
        != '7' && mat[8] != '8' && mat[9] != '9')

        return 0;
    else
        return 2;


 }



void body()
    {
    //Heading
    system("cls");
    printf("\n\n\n\t\t\t\t\t-------------------------------");
    printf("\n\t\t\t\t\t\t| Tic Tac Toe |\n");
    printf("\t\t\t\t\t-------------------------------\n\n");

    //welcome
    printf("\t\t\t\t\t\t  WELCOME!!!\n\n");



    //players
    printf("\t\t\t\t\t\tPLAYER 1 : X \n");
    printf("\t\t\t\t\t\tPLAYER 2 : O \n");


    //structure
    printf("\t\t\t\t\t    _______ _______ _______\n");
    printf("\t\t\t\t\t   |  \t   | \t   | \t   |\n");
    printf("\t\t\t\t\t   |   %c   |   %c   |   %c   |\n",mat[1],mat[2],mat[3]);
    printf("\t\t\t\t\t   |_______|_______|_______|\n");
    printf("\t\t\t\t\t   |  \t   | \t   | \t   |\n");
    printf("\t\t\t\t\t   |   %c   |   %c   |   %c   |\n",mat[4],mat[5],mat[6]);
    printf("\t\t\t\t\t   |_______|_______|_______|\n");
    printf("\t\t\t\t\t   |  \t   | \t   | \t   |\n");
    printf("\t\t\t\t\t   |   %c   |   %c   |   %c   |\n",mat[7],mat[8],mat[9]);
    printf("\t\t\t\t\t   |_______|_______|_______|\n");

    }



