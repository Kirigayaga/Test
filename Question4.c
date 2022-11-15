
int length(char * s)
{
int l;
l=0;
while(s[l]!='\0'){l++;}
return l;
}

int searchPattern(char * src, char * pattern)
{
   int cpt = 0;
   int temp = 0;
   int p = length(pattern);
   int s = length(src);
   
   for (int i = 0; i<(s-p);i++)
   {
    for ( int j=0; j<=p;j++)
    {
        temp = i ;
        if (src[i+j]==pattern[j])
         {
            i+=1 ; 
            cpt +=1 ;
         }
        if ( cpt == p) return temp ;
    
    }
    
   }
   return -1 ;
}
