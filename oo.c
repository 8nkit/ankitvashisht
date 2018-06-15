#include<stdio.h>
#include<stdlib.h>

struct POLLY
{
    int c,e;
    struct POLLY* next;
};

struct POLLY* insert(struct POLLY*,int ,int);
struct POLLY* jon(struct POLLY* ,int ,int);
struct POLLY* sum(struct POLLY*,struct POLLY* );
void print(struct POLLY*);

void main()
{
    int a,b,n,i;
    struct POLLY* P1,* P2,* P3;
    P1=P2=NULL;


    printf("Enter first polynomial\n");

    printf("----------------------\n");
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("\nEnter the polynomials in descending order of exponent\n");
    for(i=0;i<n;i++){
               printf("\n");
        printf("Enter the coefficient of term %d: ",i+1);
        scanf("%d",&a);
        printf("Enter the exponent of term %d: ",i+1);
        scanf("%d",&b);
        printf("\n");
        P1=insert(P1,a,b);
    }



    printf("Enter second polynomial\n");

    printf("----------------------\n");
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("\nEnter the polynomials in descending order of exponent\n");
    for(i=0;i<n;i++){
               printf("\n");
        printf("Enter the coefficient of term %d: ",i+1);
        scanf("%d",&a);
        printf("Enter the exponent of term %d: ",i+1);
        scanf("%d",&b);
        printf("\n");
        P2=insert(P2,a,b);
    }
    P3=sum(P1,P2);
    printf("\nThe first polynomial is ");
    print(P1);
    printf("\nThe second polynomial  is ");
    print(P2);
    printf("\nAddition of the two polynomials is: ");
    print(P3);
}

struct POLLY* jon(struct POLLY* ZZ,int c,int e)
{
    struct POLLY* newPOLLY = (struct POLLY*)malloc(sizeof(struct POLLY));
    newPOLLY->c=c;
    newPOLLY->e=e;
    if(ZZ==NULL){
    newPOLLY->next=NULL;
    return newPOLLY;
    }
    struct POLLY* trav=ZZ;
    while(trav->next!=NULL)
    trav=trav->next;
    trav->next=newPOLLY;
    newPOLLY->next=NULL;
    return ZZ;
}

struct POLLY* insert(struct POLLY* ZZ,int c,int e)
{
    struct POLLY* newPOLLY=(struct POLLY*)malloc(sizeof(struct POLLY));
    newPOLLY->c=c;
    newPOLLY->e=e;
    if(ZZ==NULL){
        newPOLLY->next=NULL;
        return newPOLLY;
    }
    struct POLLY* prev,* curr;
    prev=curr=ZZ;
    while(curr!=NULL && curr->e>e){
        prev=curr;
        curr=curr->next;
    }
    if(curr==ZZ){
        newPOLLY->next=curr;
        return newPOLLY;
    }
    else if(curr==NULL){
        prev->next=newPOLLY;
        newPOLLY->next=NULL;
    }
    else{
        newPOLLY->next=curr;
        prev->next=newPOLLY;
    }
    return ZZ;
}

struct POLLY* sum(struct POLLY* p1ZZ,struct POLLY* p2ZZ)
{
    struct POLLY* add=NULL;
    struct POLLY* t1,* t2;
    t1=p1ZZ;
    t2=p2ZZ;
    while(t1!=NULL && t2!=NULL){
        if(t1->e > t2->e){
            add=jon(add,t1->c,t1->e);
            t1=t1->next;
        }
        else if(t1->e < t2->e){
            add=jon(add,t2->c,t2->e);
            t2=t2->next;
        }
        else{
            add=jon(add,(t1->c)+(t2->c),t1->e);
            t1=t1->next;
            t2=t2->next;
        }
    }

    while(t1!=NULL){
        add=jon(add,t1->c,t1->e);
        t1=t1->next;
    }

    while(t2!=NULL){
        add=jon(add,t2->c,t2->e);
        t2=t2->next;
    }
    return add;
}

void print(struct POLLY* ZZ)
{
    struct POLLY* temp=ZZ;
    if(temp==NULL){
        printf("\nUNDERFLOW");
    }
    else{
        while(temp->next!=NULL){
            printf(" %dx^%d +",temp->c,temp->e);
            temp=temp->next;
        }
       printf(" %dx^%d ",temp->c,temp->e);
    }
}
