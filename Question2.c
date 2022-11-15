// retourne le nombre d'occurrences du caractère c dans la chaîne de caractères s.		   	  	 			 		  		 
int count(char * s, char c)		   	  	 			 		  		 
{		   	  	 			 		  		 
    int a =0;		   	  	 			 		  		 
    int i =0;		   	  	 			 		  		 
    while (s[i]!='\0')		   	  	 			 		  		 
    {if (s[i]==c)		   	  	 			 		  		 
        {a=a+1;}		   	  	 			 		  		 
    i++;		   	  	 			 		  		 
    }		   	  	 			 		  		 
    return a;		   	  	 			 		  		 
}		   	  	 			 		  		 