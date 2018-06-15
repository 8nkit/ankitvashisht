int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

void cu(char *str)
{
        int count=0, ans=0;
        int j=0;
        j=strlen(str);
        for(int i=0;i<j;i++){  //longest len substring
            if(str[i]=='1'){
                count++;
            }else{
                ans=max(ans,count);
                count=0;
            }
        }

        printf("%d\n",ans);
 }

 main()
 {

char *r;
gets(r);
cu(r);
 }
