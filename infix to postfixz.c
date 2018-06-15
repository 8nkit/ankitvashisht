#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
    int m=0;

int top = -1; // Top of Stack
char Q[SIZE], P[SIZE], Stack[SIZE]; // Q is infix and P is postfix expression array

void push(char item)
{
  Stack[++top] = item;
}
char pop( )
{
    if(top == -1)
        return -1;
    else
        return Stack[top--];
}
int is_operator(char symbol)
{
if(symbol == '^'||symbol == '*'||symbol == '/' || symbol == '+' ||symbol == '-')
{
return 1;
}
else
{
return 0;
}
}
int precedence(char symbol)
{
if(symbol == '^')
{
return(4);
}
else if(symbol == '*'||symbol == '/')
{
return(3);
}
else if(symbol == '+' ||symbol == '-')
{
return(2);
}
else if(symbol =='#')
{return 1;
}else
{
return(0);
}
}

void Infix_to_Postfix(char exp[])

{

int i,symbol,j=0;

Stack[++top]='#';

for(i=0;i<strlen(exp);i++)

{

symbol=exp[i];

if(is_operator(symbol)==0)

{

P[j]=symbol;

j++;

}

else{

if(symbol=='(')push(symbol);

else if(symbol==')')

{

while(Stack[top]!='(')

{

P[j]=pop();

j++;

}

pop();//pop out (.

}

else{

if(precedence(symbol)>precedence(Stack[top]))

push(symbol);

else{

while(precedence(symbol)<=precedence(Stack[top]))

{

P[j]=pop();

j++;

}

push(symbol);

}//end of else.

}//end of else.

}//end of else.

}//end of for.

while(Stack[top]!='#')

{

P[j]=pop();

j++;

}

P[j]='\0';//null terminate string.

}


int main()
{
printf("\nEnter Infix expression within parentheses:\n\n");
gets(Q);
Infix_to_Postfix(Q);
puts(P);

return 0;
}
