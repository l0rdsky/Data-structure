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
 linkedlistTraversal(head);
    return 0;
}