#include <stdlib.h>
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
void display(node *start)
{
    if ((start == NULL))
    {
        cout << "Empty Linked List" << endl;
    }
    else
    {
        node *temp = start;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}
node *createnode(int data)
{
    node *newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void insertatbegin(node **start)
{
    if (*start == NULL)
    {
        cout << "enter element to Insert \n";
        int data;
        cin >> data;
        *start = createnode(data);
    }
    else
    {
        cout << "enter element to Insert \n";
        int data;
        cin >> data;
        node *newnode = new node();
        newnode->data = data;
        newnode->next = *start;
        *start = newnode;
    }
}

void insertatend(node **start)
{
    if (*start == NULL)
    {
        cout << "enter element to Insert \n";
        int data;
        cin >> data;
        *start = createnode(data);
    }
    else
    {
        cout << "enter element to Insert \n";
        int data;
        cin >> data;
        node *temp = *start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = createnode(data);
    }
}
void update(node *start){
cout<<"enter index\n";
int index,data;cin>>index;
cout<<"Enter data\n";
cin>>data;
node *p=start;
for (int i = 0; i < index-1; i++)
{
    p=p->next;
}
p->data=data;
}
void insertat(node *start){
cout<<"enter index\n";
int index,data;cin>>index;
cout<<"Enter data\n";
cin>>data;
node *p = start;
for (int i = 0; i < index-2; i++)
{
    p=p->next;
}
node *newnode=createnode(data);
node *temp =p->next;
p->next=newnode;
newnode->next=temp;
}

int main()
{
    int choice;
    node *start = NULL;
    do
    {
        cout << "enter choice \n 1.Insert at begin 2.Insert at end 3.Insert between 4.update index 5.display 6.End \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertatbegin(&start);
            break;
        case 2:
            insertatend(&start);
            break;
        case 3:
            insertat(start);
            break;
           case 4:
            update(start);
            break; 
        case 5:
            display(start);
            break;
        }
    } while (choice < 6);

    return 0;
}