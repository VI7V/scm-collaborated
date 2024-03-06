#include <stdio.h>

int main()
{
    float maths, physics, chemistry, sst, english, percentage,aggregatemarks;
;
    printf("enter your maths marks:\n");
    scanf("%f", &maths);
    printf("enter your physics marks:\n");
    scanf("%f", &physics);
    printf("enter your chemistry marks:\n");
    scanf("%f", &chemistry);
    printf("enter your sst marks:\n");
    scanf("%f", &sst);
    printf("enter your english marks:\n");
    scanf("%f", &maths);
    aggregatemarks = maths + english + sst + chemistry + physics;
    printf("total aggregate marks is :%f\n", aggregatemarks);
    percentage= (aggregatemarks / 500) *100;
    printf("the total percentage is: %f", percentage);
    return 0;
}
