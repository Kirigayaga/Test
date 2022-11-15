int compare(char * s1, char *s2)		   	  	 			 		  		 
{		   	  	 			 		  		 
    int i;		   	  	 			 		  		 
    if (strlen(s2)==0 && strlen(s1)==0){return 0;}		   	  	 			 		  		 
    else if(strlen(s1)==0 && strlen(s2)!=0){return -1;}		   	  	 			 		  		 
    else if (strlen(s2)==0 && strlen(s1)!=0){return 1;}		   	  	 			 		  		 
    for(i = 0; i < strlen(s1) && i < strlen(s2); ++i)		   	  	 			 		  		 
        if(s1[i] > s2[i]) return 1;		   	  	 			 		  		 
        else if(s1[i] < s2[i]) return -1;		   	  	 			 		  		 
    return 0;		   	  	 			 		  		 
		   	  	 			 		  		 
}		   	  	 			 		  		 