// Write a program that Input Salary From the user if salary Greater than or equal to 5000 then hr=5% of basic salary, ta=6% of basic salary, da=4% of basic salary and pf=5% of basic salary. but if salary is lessthan 5000 then hra=4%,ta=5%,da=3% and pf=4%.
#include<stdio.h>
#include<conio.h>
void main()
{
    float s,hr,ta,da,pf,gr;
    printf("\n enter the value basic salary");
    scanf("%f",&s);
     if(s>=5000)
     {
         hr=(s*5)/100;
         ta=(s*6)/100;
         da=(s*4)/100;
         pf=(s*5)/100;
     }
     else
     {
         hr=(s*4)/100;
         ta=(s*5)/100;
         da=(s*3)/100;
         pf=(s*4)/100;
     }
     gr=s+hr+ta+da-pf;
     printf("\n gross salary is %f",gr);
     printf("\n hr is %f",hr);
     printf("\n ta is %f",ta);
     printf("\n da is %f",da);
     printf("\n pf is %f",pf);
     getch();
}
