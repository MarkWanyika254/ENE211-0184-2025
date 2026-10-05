#include <stdio.h>
#include <stdlib.h>

int main()
{
    //data types  variables
    double area;
    const double pi =3.142;

    //the pie is always 3.142
    double r;

    //comm to enter your radius
     printf("please enter your r" );
    scanf("%lf",&r);
    area=pi*r*r;
    printf("the area is %lf",area);

    return 0;
}
