#include<stdio.h>
#include<math.h>

void main()
{
    int a,b,c,d,e,f;
    int sum=0;
    printf("HELLO AND WELCOME TO RESTAURANT XYZ\n");
    printf("HERE IS THE MENU CARD\n");
    printf("FOR STARTERS : \n ");
    printf("ITEM \t \t COST \t \t \n");
    printf(" 1:A \t \t Acost \n 2:B \t \t Bcost \n 3:C \t \t Ccost \n 4:D \t \t Dcost\n 5:E \t \t Ecost\n ");
    a=Acost; b=Bcost; c=Ccost; d= Dcost; e=Ecost;
    printf("PLEASE INPUT THE NUMBER OF THE ITEM THAT YOU WISH TO EAT : \n");
    scanf("%d", &f);
    switch(f)
    {
        case 1 : printf("YOU HAVE SELECTED A : Acost");
        sum=sum+a;
        break;
        case 2 : printf("YOU HAVE SELECTED B : Bcost");
        sum=sum+b;
        break;
        case 3 : printf("YOU HAVE SELECTED C : Ccost");
        sum=sum+c;
        break;
        case 4 : printf("YOU HAVE SELECTED D : Dcost");
        sum=sum+d;
        break;
        case 5 : printf("YOU HAVE SELECTED E : Ecost");
        sum=sum+e;
        break;
    }


}