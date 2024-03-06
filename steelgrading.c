#include<stdio.h>
int main()
{

    float hardness, carboncontent,tensilestrength;
    int grade=5;
    printf("Enter the value of Hardness");
    scanf("%f",&hardness);
     printf("Enter the value of carbon content");
    scanf("%f",&carboncontent);
     printf("Enter the value of tensile strength");
    scanf("%f",&tensilestrength);
     if (hardness>50 && carboncontent<0.7 && tensilestrength>5600){
    grade=10;
    }     
    else if(hardness>50 && carboncontent<0.7 && tensilestrength<5600 ){
        grade =9;
    }
    else if(hardness<50 && carboncontent<0.7 && tensilestrength>5600 ){
        grade =8;
    }
    else if(hardness>50 && carboncontent>0.7 && tensilestrength>5600 ){
        grade =7;
    }
    else if (hardness>50 && carboncontent>0.7 && tensilestrength<5600){
    grade=6;
    } 
    else if (hardness<50 && carboncontent<0.7 && tensilestrength<5600){
    grade=6;
    } 
    else if (hardness>50 && carboncontent<0.7 && tensilestrength>5600){
    grade=6;
    } 
    else {
        grade=5;
    }

     printf("\nThe Grade of thhe steel is : %d\n",grade);



    return 0;
}
