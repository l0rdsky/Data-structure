#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int isempty(struct node *p){
    if (p->next=NULL)
    return 1;
    else return 0;
    
}
int isfull(struct node *p){

}
void show(struct node *last){
while (last->next!=NULL)
{
 cout<<last->data<<"\n";
  last=last->next; 
}
}
struct node * push(struct node *p,int data){
    struct node *nw = new struct node;
    nw->next=p;
    nw->data=data;
    return nw;
}
int pop(struct node *p){
    struct node *temp = p;
    p=p->next;
    int x = temp->data;
    
   
    free(temp);
    return x;


}
   struct node *top=NULL;
int main(){
 
    top=push(top,10);
    top=push(top,20);
    top=push(top,30);
    top=push(top,40);
    show(top);
    cout<<"popped = "<<pop(top);
    show(top);
    return 0;
}