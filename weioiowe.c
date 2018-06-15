
int maxlength(char *s)
{
 int c=0,max=0;
 int se;
 se=strlen(s);
 for(int i=0;s<se;i++)
 {

     if(s[i]=='0')
     {
         if(c>max){max=c;}
         c=0;
     }
     else
     {
         c++;
     }

 }
 if(c>max){max=c;}
 return max;
}
main()
{
    char *k;
    int m;
    gets(k);
    m=maxlength(k);
    printf("\n%d",m);
}
