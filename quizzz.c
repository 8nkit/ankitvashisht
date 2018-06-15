int max(res,count)
{
    if(count>res)
res=count;
return res;


}
main()
{
char k[]="100100010000";
int l,count=0,i,res=0;
l=strlen(k);
for(i=0;i<l;i++)
{
if(k[i]=='1')
{
count=0;
}
else
{
count++;
res=max(res,count);
}
}
printf("%d",res);


}
