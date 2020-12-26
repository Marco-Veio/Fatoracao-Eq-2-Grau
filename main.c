#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
    system("color F0");
    float a,b,c,delta,x1,x2,x3,x4;
    char sair;
    do{
        system("cls");
        printf("Irei fatorar a equa%c%co y=ax%c+bx+c!\n",-121,-58,-3);
        printf("Digite o valor de a: ");
        scanf("%f",&a);
        printf("Digite o valor de b: ");
        scanf("%f",&b);
        printf("Digite o valor de c: ");
        scanf("%f",&c);
        delta = (b*b)-(4*a*c);
        printf("Sua fun%c%co %c: y=",-121,-58,-126);
        if ((a!=0)&&(a!=1)&&(a!=-1))
            printf("%.2fx%c",a,-3);
        if (a==1)
            printf("x%c",-3);
        if (a==-1)
            printf("-x%c",-3);
        if ((b>0)&&(a!=0))
            printf("+");
        if ((b!=0)&&(b!=1)&&(b!=-1))
            printf("%.2fx",b);
        if (b==1)
            printf("x");
        if (b==-1)
            printf("-x");
        if ((c>0)&&((b!=0)||(a!=0)))
            printf("+");
        if ((c!=0)||((b==0)&&(a==0)))
            printf("%.2f",c);
        printf("\n\n");
        if (a==0)
            printf("Essa equa%c%co n%co %c de 2%c grau!",-121,-58,-58,-126,-8);
        else
            printf("A equa%c%co fatorada %c:\n",-121,-58,-126);
        if (a==-1)
            printf("-");
        if ((a!=1)&&(a!=-1))
            printf("%.2f",a);
        if (delta<0){
            x1=(-b)/(2*a);
            x2=fabs(sqrt(fabs(delta))/(2*a));
            x3=fabs(x1);
            printf("(x");
            if (x1<0)
                printf("+");
            if (x1>0)
                printf("-");
            if (x1!=0)
                printf("%.2f",x3);
            if ((x2!=0)&&(x2!=1))
                printf("+%.2fi",x2);
            if (x2==1)
                printf("+i");
            printf(")");
            printf("(x");
            if (x1<0)
                printf("+");
            if (x1>0)
                printf("-");
            if (x1!=0)
                printf("%.2f",x3);
            if ((x2!=0)&&(x2!=1))
                printf("-%.2fi",x2);
            if (x2==1)
                printf("-i");
            printf(")");
        }else{
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            x3=fabs(x1);
            x4=fabs(x2);
            if (x1==0)
                printf("(x)");
            if (x1<0)
                printf("(x+%.2f)",x3);
            if (x1>0)
                printf("(x-%.2f)",x3);
            if (x2==0)
                printf("(x)");
            if (x2<0)
                printf("(x+%.2f)",x4);
            if (x2>0)
                printf("(x-%.2f)",x4);
        }
        printf("\nAperte enter para recome%car ou esc para sair!",-121);
        do{
            sair=getch();
        }while(sair!=13 && sair!=27);
    }while(sair==13);
    return 0;
}
