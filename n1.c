#include <stdio.h>

int main(void)
{
    int n;
    printf("N:");
    scanf("%i",&n);
    int k = 0;
    int temp = 0;
    
    while(temp < n){
        ++k;
        temp+=3;
    }
    printf("K: %i\n Sum:%i \n", k, temp);
    return 0;
    
}


 /* for(temp=0; temp<n; temp+=3){
        ++k;
        temp+=3;
    }
    */
    