#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	TOH(4,1,2,3);
    
    return(0);
}

 // n represents the number of elements and A,B and C are the Towers
void TOH(int n,int A,int B,int C){
    
    
    
    
    if(n>0){
        
        TOH(n-1,A,C,B);
        
         printf(" (%d , %d ) \n " ,A,C);
         
         TOH(n-1,B,A,C);
        
        
        
    }
}
