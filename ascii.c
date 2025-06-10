#include<stdio.h>
int main(){
    char ch;
    printf("enter your character:");
    scanf("%c",&ch);

    if(ch>=97 && ch<=122)
        printf("this is a lowercase character");
    else
    printf("this is not a lowercase character");
    return 0;
}