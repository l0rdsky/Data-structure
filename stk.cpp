#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct stk
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stk *ptr){
    if (ptr->top == -1)
    {return 1;}
    else 
    {return 0;}
}
int isfull(struct stk *ptr){
    if (ptr->top == ptr->size-1)
    {return 1;}
    else 
    {return 0;}
}
void peak(struct stk *p,int index){
    if (index>0)
    {
        cout<<p->arr[(p->top)-index+1];
    }
    else cout<<"invalid index";

}
void push(struct stk *p,int val){
    if (isfull(p))
    {
        printf("stack overflow \n");
    }
    else{
        p->top++;
        p->arr[p->top]=val;
    }
}
int pop(struct stk *p){
    if (isempty(p))
    {
        printf("stack underflow \n");
    }
    else{
        int popped = p->arr[p->top];
        p->top--;
        cout<<"popped \n";
        return popped;
    }
}
void show(struct stk *p){
    for (int i = 0; i <= p->top; i++)
    {
        cout<<p->arr[i];
        printf("\n");
    }
    
}

int main(){
 struct stk *sp = new struct stk;
 sp->size = 10;
 sp->top=-1;
 sp->arr= new int(sp->size);
 sp->arr[0]=10;
 sp->top++;
push(sp,20);
push(sp,30);
push(sp,40);
push(sp,100);
show(sp);
peak(sp,1);
    return 0;
}