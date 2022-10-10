#include<bits/stdc++.h>
using namespace std;
struct cirLL
{
    int data;
    struct cirLL *next;
};
void cirLLTraversal(struct cirLL *head){
    struct cirLL *ptr;
    ptr=head;
    do
    {
        cout<<ptr->data;
        cout<<"\n";
        ptr=ptr->next;
    } while (ptr!=head);

}
int main(){
    struct cirLL *head,*second,*third,*fourth;
    head= new struct cirLL;
    second= new struct cirLL;
     third= new struct cirLL;
      fourth= new struct cirLL;
      head->data=10;
      head->next=second;
      second->data=20;
      second->next=third;
      third->data=30;
      third->next=fourth;
      fourth->data=40;
      fourth->next=head;
      cirLLTraversal(head);
    return 0;
}