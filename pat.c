#include <stdio.h>
int main()
{
    int u,i=1,j;
    scanf("%d",&u);
    while(i<=u){
        j=1;
        while(j<=u){
            printf("* ");
            j++;
            
        }
        printf("\n");
        i++;
    }
}