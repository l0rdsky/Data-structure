#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct stknode  {
  int data;
  struct stknode *next;  
};
struct stknode* push(struct stknode *p,int data){
struct stknode *nw = new struct stknode;
nw->data=data;
nw->next=p;
return nw;
}
void show(struct stknode *last){
while (last!=NULL)
{
 cout<<last->data<<"\n";
  last=last->next; 
}
}
/*struct stknode* newnode(struct stknode *p){
  struct stknode *Nw= new struct stknode;
  Nw->next=p;
  return Nw; 
}*/

int main(){
    struct stknode *end= new struct stknode;
  end->data=10;
  end->next=NULL;
  struct stknode *second= new struct stknode;;
  second->data=20;
  second->next=end;
struct stknode *third= new struct stknode;
third->data=30;
third->next=second;
struct stknode *fourth = new struct stknode;
fourth->data=40;
fourth->next=third;
struct stknode *fifth= push(fourth,50);
show(fifth);
    return 0;
}