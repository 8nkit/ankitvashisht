int maxlength( char *s)
{
    int m=0;
    int c=0;
    int l;
    l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]=='1')
        {
            c++;
        }
        else
        {
            if(c>m)
                m=c;
            c=0;
        }
    }
    if(c>m)
        m=c;
    return m;
}
main()
{
    char *p;
    int k;
printf("Enter the string")
;
k=gets(p);
printf("\n%d",k)
;
}
