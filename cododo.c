int maxlength( string s)
{
 int l = 0;
 bool one = s[0] == '1';
 if(one) l = 1;
 int maxl = 0;
 for(int i=1;i<s.size();++i){
     if(s[i] == '1' && one){
        l++;
     }
     else if(s[i]=='1' && !one){
         one=true;
         l=1;
     }
     else if(s[i] == '0'){
         one = false;
         if(l > maxl)
            maxl=l;
         l = 0;
     }
 }
 if(l > maxl)
    maxl=l;
 return maxl;
}
