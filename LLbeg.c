#include<stdlib.h>
#include<stdio.h>
struct node{
          int data;
          struct node*next;
};
struct node* head;//global variable can be accessed anywhere
void insert(int x) {
struct node*temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x; 
    temp->next=head; //temp->next=NULL; if(head!=NULL)
  head=temp;
}
void print() {
      struct node*temp=head;
      printf("list is: ");
  while(temp!=NULL)
    {
        printf("%d", temp->data);
        temp=temp->next;
    }
  printf("\n");
}
int main() {
      head=NULL; //EMPTY LIST
printf("how many numbers:\n");
int n,i,x;
scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("enter the number\n");
    scanf("%d",&x);
      insert(x);
    print();
}
}