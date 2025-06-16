#include<stdio.h>
int main(){
     int r;
     float pi=3.14;
     float area;
     printf("radius of circle:");
     scanf("%d",&r);
     area=pi*r*r;
     printf("area of circle is %f",area);
     return 0;
}