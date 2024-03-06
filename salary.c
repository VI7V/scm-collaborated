#include<stdio.h>

int main()
{
    float salary,hra,da,dasalary,hrasalary,grossalary;
    printf("enter your salary:\n");
    scanf("%f",&salary);
    printf("enter the DA:\n");
    scanf("%f",&da);
    printf("enter the hra:\n");
    scanf("%f",&hra);
    dasalary=salary+ (da/100)*salary;
    printf("the salary after adding da: %f\n",dasalary);
    hrasalary=salary+ (hra/100)*salary;
    printf("the salary after adding hra:%f\n",hrasalary);
    grossalary=salary+dasalary+hrasalary;    
    printf("the gross salary %f",grossalary);
    
    

    return 0;
}
