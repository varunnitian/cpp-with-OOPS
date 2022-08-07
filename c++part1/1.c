#include<stdio.h>


int main(){
    int row,i,j,k,a=1;
    printf("\n number of rows=");
    scanf("%d",&row);
    for( i=0;i<=row;i++){
        for( j=0;j<row-i;j++){
            printf(" ");
        }
        for( k=0;k<=i;k++){
            if(i==0 || k==0 ||k==i ){
                a=1;
            }
            else{
                a=a*(i-k+1)/k;            }
            printf(" %d",a);
        }
        printf("\n");
    }
    return 0;
}