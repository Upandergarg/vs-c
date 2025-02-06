#include <stdio.h>
int main()
{
    int u,i=0,j;
    scanf("%d",&u);
    while(i<=u){
        j=1;
        while(j<=i){
            printf("%d ",j);
            j++;
            
        }
        printf("\n");
        i++;
    }
}