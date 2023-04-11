#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

 
void create(int A[],int n){
    int i;
    struct Node *t,*last;     //first is t,,second is last
    first=new Node[sizeof(struct Node)];
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=new Node[sizeof(struct Node)];
        t->data=A[i];
        t->next=NULL;
        last->next=t;
    }
}

//counting the no of node
int count(struct Node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return 1;
}

//sum of all element node
int sum(struct Node *p){
    int s=0;
    while(p!=NULL){
        s+=p->data;
        p=p->next;
    }
    return s;
}

int max(struct Node *p){
    int max = INT_MAX;
    while(p){
        if(p->data>max){
            max=p->data;
            p=p->next; 
        }
        return max;
    }
}

int main(){
    int A[] = {3,5,7,10, 25, 8,32,2};
    create(A,8);  //array A, size 8

    cout<<"count = "<<count(first)<<endl;
    cout<<"count = "<<sum(first)<<endl;
    return 0;
}