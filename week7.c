//การปริ้นข้อมูลทั้งหมดใน array โดยใช้ linked list
#include <stdio.h>
#include <stdlib.h> 

/* สร้างโครงสร้างข้อมูลชื่อ node ขึ้นมา ข้างใน node
   ประกอบด้วยตัวแปร data และ next (next คือ
   pointer ที่ชี้ไปที่ node ตัวต่อไป) 

   +-------------+      +-------------+
   |   11  |  o-------->|  13 |  null |
   +-------------+      +-------------+
      data   next         data   next
*/

struct node{
    int data;
    struct node *next;
};

void list(struct node **head, struct node **node, int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (*head==NULL)
        {
            // สร้างพื้นที่ใน memory ขนาดsizeof(struct node) เพื่อเก็บarray[i]
            // ให้ pointer head กับ pointer node ชี้ไปที่ memory ที่สร้างขึ้นมา
            *head = *node = (struct node*)malloc(sizeof(struct node));
        }
        else
        {
            // pointer next ชี้ไปที่ memory ที่สร้างขึ้นมาอีกรอบ
            (*node)->next = (struct node*)malloc(sizeof(struct node));
            // เปลี่ยน pointer node ชี้ไปที่ memory ที่พึ่งสร้างขึนมาใหม่
            *node = (*node)->next;
        }
        // ให้ data ที่ pointer node ชี้ไป ณ ตอนนั้นมีค่าเป็น array[i] 
        (*node)->data = array[i];
        // ให้ pointer next เป็น NULL
        (*node)->next = NULL;   
    }
}

void print(struct node *head)
{
  struct node *tmp = head;
  while(tmp!=NULL)
  {
    printf("%d ",tmp->data);
    tmp = tmp->next;
  }
}

int main()
{
    struct node *head = NULL,*node;
    int array[] = {2, 3, 5, 7, 11, 13};
    int n = sizeof(array)/sizeof(array[0]);
    list(&head,&node,array,n);
    print(head);
}
