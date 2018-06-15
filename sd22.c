int main()
{
   long int t,n,x;
   scanf("%ld",&t);
   while(t--)
   {   x=0;
       scanf("%ld",&n);
       while(n!=0)
       {
           x=x+n/5;
           n=n/5;
       }
       printf("%ld\n",x);
   }
return 0;
}
