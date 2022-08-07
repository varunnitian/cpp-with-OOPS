#include<stdio.h>
int main() {
    int a=5,b=6,c,d,e;
    //using arithmetic operators//
    c=a+b;
    d=b-a;
    //using relational operator//
    printf("%d==%d is %d\n",a,b,a==b);
    printf("%d>%d is %d\n",a,b,a>b);
    //using logical operator//
    e=((a!=b)||(c>d));
    printf("(a!=b)||(c>d) is %d\n",e);
    e=((a==b)&&(c<d));
    printf("(a==b)||(c<d) is %d\n",e);
//using increment or decrement operator//
e=++d;
d=c--;
printf("the value of c,d,e is %d %d %d",c,d,e);
//using assignment operator//
e+=b;
d-=a;
printf("the value of d and e is: %d,%d",d,e);
    return 0;
}