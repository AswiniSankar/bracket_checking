#include<stdio.h>
#include<string.h>
char stack[30],a[30];
int top=-1,top1=-1;
void push(char);
void pop();
int main()
{
  int i,j,k; 
  char str[30];
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
     if(str[i]=='(')
        push(str[i]);
     else if(('a'<=str[i] && str[i]<='z')||('A'<=str[i] && str[i]<='Z'))
        push(str[i]);
     else if(str[i]==')')
      { push(str[i]);
         pop();
      }
  }
}
void push(char s)
{
  stack[++top]=s;
}
void pop()
{ int i;
  while(stack[top]!='(')
  {
    //printf("%c",stack[top]);
    
    a[++top1]=stack[top--];
   //top--;
  }a[++top1]='(';
  for(i=top1;top1!=-1;i++)
   printf("%c",a[top1--]);
  
}
