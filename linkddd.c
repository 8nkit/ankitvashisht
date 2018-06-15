#include<stdio.h>
#include <stdlib.h>
struct NODE
{
int Info;
struct NODE*NEXT;
};
struct NODE *HEAD = NULL;
struct NODE *PREV, *CURR;

struct NODE *NewNode;
void AddNode(int ITEM)
{
NewNode=(struct NODE*)malloc(sizeof(struct NODE));
NewNode-> Info =ITEM;
NewNode-> NEXT = NULL;
if(HEAD==NULL)
{
HEAD=NewNode;
return;
}
if(NewNode-> Info < HEAD ->Info){
NewNode->NEXT=HEAD;
HEAD = NewNode;
 return;
}
PREV = NULL;
CURR = NULL;
CURR =HEAD;

while(CURR !=NULL){
        CURR = CURR ->NEXT;
if(NewNode->Info <= CURR ->Info)
    break;
PREV = CURR;
}
NewNode->NEXT = PREV ->NEXT;
PREV ->NEXT= NewNode;
// Place Your Code Here
} // end of AddNode function

void DeleteNode()
{
if(HEAD==NULL)
{
printf("\nEmpty List");
    return;
}
int ITEM;
printf("\nEnter the value to be deleted from the list ");
scanf("%d",&ITEM);

if(ITEM==HEAD->Info)
{

    HEAD = HEAD -> NEXT;
    return;
}
CURR = HEAD;
PREV=CURR;
while(CURR->Info!=ITEM)
{
    PREV=CURR;
    CURR = CURR ->NEXT;
if(CURR==NULL)
{
printf("\nItem not found in the list");
return;
}
}
struct NODE *temp;
temp=CURR;
  PREV ->NEXT=CURR ->NEXT;
  free(temp);


}

// end of DeleteNode function
void Traverse()
{
CURR=HEAD;
while(CURR!=NULL)
{
printf("%d\n",CURR->Info);
CURR=CURR->NEXT;
}
}
int main()
{
int inf, ch;
while(1)
{
printf( " \n\n\n\n Linked List Operations\n\n");
printf( " 1- Add Node \n 2- Delete Node \n");
printf( " 3- Traverse List \n 4- exit\n"); printf( "\n\n Your Choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1: printf( "\n Put info/value to Add: ");
scanf("%d",&inf);
AddNode(inf);
break;
case 2: DeleteNode();
break;
case 3: printf( "\n Linked List Values:\n");
Traverse();
break;
case 4: exit(0);
} // end o f switch i
} // end of while loop return 0;
}
