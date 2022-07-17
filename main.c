/*
TITLE	PAYROLL PROGRAM FOR GITONGA'S FACTORY
AUTHOR  KENDI KIRUJA
JULY    2022
LICENSE	MIT*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int number,KRApin,hourswrk,Normalpay,Overtimepay,Taxpaid,Netincome;
    int totalhrswrkd = 40;
    char name[100];
    printf("\tGITONGA’S FACTORY PAYSLIP!\n");

   printf("Enter your name:");
   scanf("%s", &name);

    printf("\nEnter your number:");
    scanf("%d", &number);

    printf("Enter number of Hours worked:");
    scanf("%d", &hourswrk);

    printf("Enter your KRA pin:");
    scanf("%d", &KRApin);

    Normalpay = 1000 * totalhrswrkd;

    Overtimepay = (hourswrk - totalhrswrkd) * 1500;

    Taxpaid = 30*Normalpay/100;

    Netincome = (Normalpay - Taxpaid)+ Overtimepay;
    printf("Normalpay  %d\n",  Normalpay);
    printf("Overtimepay %d\n", Overtimepay);
    printf("Taxpaid    %d\n", Taxpaid);
    printf("Netincome  %d\n", Netincome);
    return 0;
}
