#include <stdio.h>
#include <cs50.h>

int main()
{
    int n = get_int("Number: ");
    if ((n >= 1) && (n<=12)){
        if ((n == 1) || (n ==2) || (n==3)){
            printf("Winter\n");
        }
        if ((n == 4) || (n ==5) || (n==6)){
             printf("Spring\n");
        }
        if ((n == 7) || (n ==8) || (n==9)){
            printf("Summer\n");
        }
         if ((n == 10) || (n ==11) || (n==12)){
              printf("Autumn\n");
         }
    }
    
}