#include<stdio.h>
int main(){

    int age=19;
    switch (age)
    {
    case 18:
    printf("you are 18");
        break;
    
    case 19:
    printf("you are 19");
        break;
    
    case 20:
    printf("you are 20");
        break;
    
    default:
    printf("no case is matched");
        break;
    }
    return 0;
}