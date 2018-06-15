main()
{
    int l,count=0,i,j,l2,count1=1;
    char str[]="110110110110011";
    char sub[]="0";
    l=strlen(str);
    l2=strlen(sub);
            for (i = 0; i < l;)
    {
        j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;
            count = 0;
        }
        else
            i++;
    }



    printf("%d",count1);
}
