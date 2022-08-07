#include<stdio.h>
int main(){
    int n;
    printf("enter the number n:\n");
    scanf("%d",&n);
    if (n==1 || n==3 || n==5 || n==7 ||n==8 ||n==10 || n==12)
    {
        printf("number of days are 31\n");
    }
    else if(n==4 || n==6 || n==9 || n==11)
    {
        printf("number of days are 30\n");
    }
    else if (n==2)
    {
        printf("number of days are 28 in normal year and 29 in a leap year\n");
    }
    else
    {
        printf("invalid input\n");
    }
    return 0;
}