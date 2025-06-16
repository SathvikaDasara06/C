#include<stdio.h>
int main(){

int marks1,marks2,marks3;

printf("enter marks of subject1:");
scanf("%d",&marks1);
printf("enter marks of subject2:");
scanf("%d",&marks2);
printf("enter marks of subject3:");
scanf("%d",&marks3);

float total=(marks1+marks2+marks3)/3;

if(total>=40)
    if(marks1<33||marks2<33||marks3<33)
    printf("sorry you have not passed in one of the subject");
    else
    printf("congrats!you have passed the exam");

else
printf("you failed, as your marks are less than 40 percent");

return 0;
}





