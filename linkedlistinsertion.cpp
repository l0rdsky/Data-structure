#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;    
};
void linkedlistTraversal(struct node *ptr){
    while (ptr!=NULL)
    {
         cout<<"element:\n"<< ptr->data<<"\n";
        ptr = ptr->next;
    }   
}
struct node *insertAtbegin(struct node *head,int element){
    struct node *newnode = new struct node;
    newnode->next=head;
    newnode->data=element;
    head=newnode;
    return head;
}
struct node *insertAtend(struct node *head,int element){
      struct node *newnode = new struct node;
      struct node *p;
      p=head;
      while (p->next!=NULL)
      {
        p=p->next;
      }
      newnode->data=element;
      newnode->next=NULL;
      p->next=newnode;
      return head;
}
struct node *insertAtindex(struct node *head,int index,int element){
    struct node *newnode = new struct node;
   struct node *p;
   p=head;
   int i=0;
   while (i<index-1)
   {
    p=p->next;
    i++;
   }
   newnode->data=element;
   newnode->next=p->next;
   p->next=newnode;
    return head;
}

int main(){
  struct node *head,*second,*third,*fourth;
  head = new struct node;
  second = new struct node;
  third = new struct node;
fourth = new struct node;
 head->data =10;
 head->next = second;
  second->data =20;
 second->next = third;
  third->data =30;
 third->next = fourth;
 fourth->data=40;
 fourth->next=NULL;
//head= insertAtindex(head,2,50);
//head= insertAtend(head,1000);
 linkedlistTraversal(head);
    return 0;
}