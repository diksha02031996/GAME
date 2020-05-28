/* C code */

#include <stdio.h>
#include <stdlib.h>
#define m 3
#define n 3
int block[m][n];
int i,j,score = 0;
char reply;
int main()
{

    printf("LET'S START GAME.....!!!!\n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("ENTER VALUES INTO BLOCK ON GIVEN POSITION[%d][%d]::::", i, j);
            scanf("%d", &block[i][j]);


        }
    }




    printf("ENTERED BLOCK IS HERE.....!!!");
   for(i=0; i<m; i++) {
        printf("\t\n");
      for(j=0;j<n;j++) {
         printf("%d\t", block[i][j]);

      }
   }
   printf("\n\n");
   int a11= *(*(block+0)+0);
   int a12= *(*(block+0)+1);
   int a13= *(*(block+0)+2);
   int a21= *(*(block+1)+0);
   int a22= *(*(block+1)+1);
   int a23= *(*(block+1)+2);
   int a31= *(*(block+2)+0);
   int a32= *(*(block+2)+1);
   int a33= *(*(block+2)+2);
   if(a11 == a22 && a22 == a33)
   {
        score = score+10;
                               printf("!...WINNER...! You Win %d Points",score);
                               printf("Would You Like To Play It Again ??? Enter Y or N:\n\n",reply);
                               scanf("%c",reply);
                               while(reply=='Y')
                               {
                                   printf("CONTINUE...");
                                   main();
                               }
                               printf("GoodBye...!");
   }
      else if(a11 == a21 && a11 == a31)
      {
            score = score+10;
                               printf("!...WINNER...! You Win %d Points",score);
                               printf("Would You Like To Play It Again ??? Enter Y or N:\n\n",reply);
                               scanf("%c",reply);
                            while(reply=='N')
                               {
                                   printf("GoodBye...");

                               }
                               printf("Continue...!");
                               main();

      }

          else if(a31 == a32 && a32== a33)
          {
               score = score+10;
                               printf("!...WINNER...! You Win %d Points",score);
                               printf("Would You Like To Play It Again ??? Enter Y or N:\n\n",reply);
                               scanf("%c",reply);
                               while(reply=='N')
                               {
                                   printf("GoodBye...");

                               }
                               printf("Continue...!");
                               main();

          }

              else if(a13 == a23 && a23 == a33)
              {
                    score = score+10;
                               printf("!...WINNER...! You Win %d Points",score);
                               printf("Would You Like To Play It Again ??? Enter Y or N:\n\n",reply);
                               scanf("%c",reply);
                                while(reply=='N')
                               {
                                   printf("GoodBye...");

                               }
                               printf("Continue...!");
                               main();

              }
                  else if(a12 == a22 && a22 == a32)
                  {
                        score = score+10;
                               printf("!...WINNER...! You Win %d Points",score);
                               printf("Would You Like To Play It Again ??? Enter Y or N:\n\n",reply);
                               scanf("%c",reply);
                              while(reply=='N')
                               {
                                   printf("GoodBye...");

                               }
                               printf("Continue...!");
                               main();

                  }
                      else if(a21 == a22 && a22 == a23)
                      {
                            score = score+10;
                               printf("!...WINNER...! You Win %d Points",score);
                               printf("Would You Like To Play It Again ??? Enter Y or N:\n\n",reply);
                               scanf("%c",reply);
                                 while(reply=='N')
                               {
                                   printf("GoodBye...");

                               }
                               printf("Continue...!");
                               main();
                      }

                          else if(a11 == a12 && a12 == a13)
                          {
                               score = score+10;
                               printf("!...WINNER...! You Win %d Points",score);
                               printf("Would You Like To Play It Again ??? Enter Y or N:\n\n",reply);
                               scanf("%c",reply);
                               while(reply=='N')
                               {
                                   printf("GoodBye...");

                               }
                               printf("Continue...!");
                               main();

                          }



   else
   {
       score = score-10;
       printf("!...LOOSER...! You Loose %d Points",score);
       printf("\n\nTry Again!!!!!!\\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n");
       main();
   }

           return 0;
   }



