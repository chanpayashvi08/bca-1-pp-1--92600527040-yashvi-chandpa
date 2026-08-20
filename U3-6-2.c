// Write a program that Input Salary From the user if salary Greater than or equal to 5000 then hr=5% of basic salary, ta=6% of basic salary, da=4% of basic salary and pf=5% of basic salary. but if salary is lessthan 5000 then hra=4%,ta=5%,da=3% and pf=4%.
#include<stdio.h>
#include<conio.h>
void main()
{
    float s,hr,ta,da,pf,gr;
    printf("\n enter the value basic salary");
    scanf("%f",&s);
    printf("\n enter the value of hr");
    scanf("%f",&hr);
    printf("\n enter the value of ta");
    scanf("%f",&ta);
    printf("\n enter the value of da");
    scanf("%f",&da);
    printf("\n enter the value of pf");
    scanf("%f",&pf);


     if(s>=5000)
     {
         hr=(s*hr)/100;
         ta=(s*ta)/100;
         da=(s*da)/100;
         pf=(s*pf)/100;
     }
     else
     {
         hr=(s*hr)/100;
         ta=(s*ta)/100;
         da=(s*da)/100;
         pf=(s*pf)/100;
     }
     gr=s+hr+ta+da-pf;
     printf("\n gross salary is %f",gr);
     printf("\n hr is %f",hr);
     printf("\n ta is %f",ta);
     printf("\n da is %f",da);
     printf("\n pf is %f",pf);
     getch();
}
