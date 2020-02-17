/* 6210402518 Onrawin Heemsuhree */
#include <stdio.h>
#include <stdlib.h> 

struct node{
    int data;
    struct node *next;
};

void sort(struct node **head, int inp){
    struct node *new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = inp;
    new_node->next = NULL;

    struct node *current;

    if (*head==NULL || (*head)->data >= new_node->data){
        new_node->next = *head;
        *head = new_node;
    }

    else{
        current = *head;
        while(current->next!=NULL && current->next->data<new_node->data)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }  
}

void print(struct node *head){
    struct node *tmp = head;
    while(tmp!=NULL)
    {
        printf("%d\n",tmp->data);
        tmp=tmp->next;
    }
}

int main(){
    struct node *head=NULL;
    int inp;
    while(1){
        scanf("%d",&inp);
        if(inp<=-1)break;
        sort(&head, inp);
    }
    print(head);
}