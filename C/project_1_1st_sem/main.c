#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int scissorpaperrock(char, char);
int main()
{
    
    FILE *g1, *g2;
    srand(time(NULL));
    int choice, main_count = 1, number;
    char you, comp;
    printf("\t\t\t\t************************************\n");
    printf("\t\t\t\t*               WELCOME            *\n");
    printf("\t\t\t\t************************************\n");
    printf("\n\t\t\t\t| Please choose an option           |\n");
    while (1)
    {

        if (main_count > 1)
        {
            printf("\n\t\t\t\t|Do want to play more?              |\n");
            printf("\t\t\t\t|Hit your favourite game again      |\n");
        }
        printf("\t\t\t\t|1 Guessing Game                    |\n");
        printf("\t\t\t\t|2 Rock Paper Scissor               |\n");
        printf("\t\t\t\t|3 Exit                             |\n");
        printf("Please enter: ");

        scanf("%d", &choice);
        switch (choice)
        {



        case 1:
            number = rand() % 100 + 1;
            int guess, guess_count=1;
            int old_score;
            printf("Guess a number between 0 to 100: ");
             printf("\n%d\n",number);

            do
            {
                scanf("%d", &guess);
                if (guess > number)
                {
                    printf("Please enter a lower number\n");
                }
                else if (guess < number)
                {
                    printf("Please enter a higher number\n");
                }
                else
                {
                    printf("Well done! You guessed it right in %d attempt\n", guess_count);
                }
                guess_count++;

            } while (guess != number);
            guess_count--;

            g1 = fopen("game_score.txt","r");
            fscanf(g1,"%d",&old_score);
            if (old_score>guess_count)
            {
                printf("Congrats! you broke the previous record\n");
                printf("Previous highest record was %d and you scored %d",old_score,guess_count);
                g1 = fopen("game_score.txt","w");
                fprintf(g1,"%d",guess_count);
            }
            fclose(g1);
            break;




        case 2:
            int count_2nd_game = 1; /*to loop 2nd game 5times*/
            int player_score = 0, comp_score = 0, draw = 0; /*to keep the recod of scores*/
            while (count_2nd_game<=5)
            {
                number = rand() % 100 + 1;
                if (number < 33)
                {
                    comp = 's';
                }
                else if (number >= 33 && number < 66)
                {
                    comp = 'p';
                }
                else
                {
                    comp = 'r';
                }

                printf("\nEnter 's' for scissor, 'p' for paper and 'r' for rock: ");
                scanf(" %c",&you);
                int result = scissorpaperrock(you, comp);
                if (result==1)
                {
                    player_score++;
                }
                else if (result == -1)
                {
                    comp_score++;
                }
                else{
                    draw++;
                }
                
                if (result == 0)
                {
                    printf("\nIt's draw,you choose %c and computer choose %c\n", you, comp);
                }
                else if (result == 1)
                {
                    printf("\nWohoo! you won, you choose %c and computer choose %c\n", you, comp);
                }
                else if (result == -1)
                {
                    printf("\nwooh! you lose, you choose %c and computer choose %c\n", you, comp);
                }
                else if (result == 2)
                {
                    printf("\nPlease Enter valid input\n");
                }
                
                count_2nd_game++;
            }
            printf("Player score %d\n",player_score);
            printf("Computer score %d\n",comp_score);
            if (draw>0)
            {
                printf("The game was draw %d times",draw);
            }
            
            break;

        case 3:
            printf("Exiting program...");
            exit(0);
            break;

        default:
            printf("Enter valid input\n");
            break;
        }
        main_count++;
    }
    return 0;
}

int scissorpaperrock(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }
    if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else
    {
        return 2;
    }
}


