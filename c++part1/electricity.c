#include<stdio.h>
#include<string.h>
int main(){
int cid,units;
float charge,bill,amt;
char cname[20];
printf("Enter the customer id:\n");
scanf("%d",&cid);
printf("enter the customer name:\n");
scanf("%s",&cname);
printf("Enter the units consumed:\n");
scanf("%f",&units);
if (units <=199)
{
    charge=1.20;
}
else if (200<=units<=399)
{
    charge=1.50;
}
else if (400<=units<=599)
{
    charge=1.80;
}
else if (units >=600)
{
    charge=2.00;
}
bill=charge*units;
if (bill > 400)
{
    amt=bill*0.15;
}
if (bill < 100)
{
    amt=100;
}
printf("customer id is %d\n",cid);
printf("customer name is %s\n",cname);
printf("units consumed is %f\n",units);
printf("bill is %f\n",bill);
printf("amount is %f\n",amt);
    return 0;
}
