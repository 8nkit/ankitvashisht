main()
{
char a[10],i;
int k[10]={0},w=0;
printf("\nenter the no of cases");

int n;
int j;
int m;
int l;
int c=0;
scanf("%d",&n);
while(n!=-1)
{
    c=0;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if((a[i]!=a[i+1]))
{m=c++;
}
}
k[w++]=m;
n--;}
for(i=1;i<w;i++)

printf("\n%d",k[i]);


}
