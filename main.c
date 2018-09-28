#include <stdio.h>
#include <stdlib.h>

int main()
{
   int userInput;

     do
     {
        printf("Choose an option: \n1. New Game\n2. Load Game\n3. More Options\n4. Quit\n\nYour Selection: ");
        scanf("%d", &userInput);

        switch(userInput)
        {
        case 1:
            printf("You chose New Game!\n");
            break;
            case 2:
                  printf("You chose Load Game!\n");
                  break;

             case 3:
                  printf("You chose More Options!\n");
                 break;

            case 4:
                printf("You chose Quit!\n");
                break;

        }


     }
    while (userInput != 4);





    return 0;
}
