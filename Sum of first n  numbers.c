# include <stdio.h>

int main(){
    int n;
    printf("enter the no.\n");
    scanf("%d",&n);
    int i=1;
    int sum=0;
    do{
        sum = sum + i;
        i++;
    }while(i<=n);
    printf("sum is: %d\n", sum );

    return 0;
} 