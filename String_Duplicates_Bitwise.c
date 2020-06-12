#include <stdio.h>

int main(int argc, char **argv)
{
	//declaring and initalizing  the character array
	char A[]="finding";
    
    int h=0,x=0;
     
     for(int i=0;A[i]!='\0';i++){
         
         
         x=1;
         
         x=x<<(A[i]-97);
         //perfoming bitwise and on the bits of x and h
         if((x&h) >0){
             
             printf(" %c is Repeating \n ",A[i]);
         }
		 //performing bitwise or on the bits of x and h
         else{
             
             h=x|h;
         }
         
     }
     
     return(0);
}
