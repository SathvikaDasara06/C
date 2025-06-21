#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node*next;
};
struct node*head;
void insert(int data); //insert data at end of the list

void print()//print all elements of the list

    {
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void delete(int n) //delete node at nth position
{
    struct node*temp1=head;
    if(n==1){
        head=temp1->next;
        free(temp1);
        return;
    }
    struct node*temp1=head;
    for(int i=0;i<n-2;i++)
        temp1=temp1->next;//temp1 points to n-1th node
        struct node*temp2=temp1->next;//nth node
        temp1->next=temp2->next;//n+1th node
        free(temp2);
}
int main(){
    head=NULL;//empty list
    insert(2);
    insert(4);
    insert(6);
    insert(5);
int n;
printf("enter a position\n");
scanf("%d",&n);
delete(n);
print();
}