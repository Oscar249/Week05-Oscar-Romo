#include<stdio.h>

int main(int argc, char const *argv[])
{
    float r=0,h=0,pi = 3.1416;

    float area=0;
    printf("input the value of height");
    scanf("%f",&h);

    printf("input the value radius\n");
    scanf("%f",&r); 

    area=2*pi*r*(r+h);

    printf("the area is:%f",area);

    return 0;
}
