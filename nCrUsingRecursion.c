#include <stdio.h>

int main(int argc, char **argv)
{
	printf("%d \n ",nCr2(5,3));
    return(0);
}


int Ifact(int n){
    
    
    
    if(n==0){
        
        return 1;
    }
    
       
    else
        
        return Ifact(n-1)*n;
        
}


 //method-1 to calculate the factorial
int nCr(int n,int r){
    
    int t1,t2,t3;
    
    t1=Ifact(n);
    t2=Ifact(r);
    t3=Ifact(n-r);
    
    
    return t1/(t2*t3);
    
    
    
    
    
    
    
}

//method-2 to calculate the factorial
int nCr2(int n,int r){
    
    
    
    if(r==0 || n==r){
        
        
        return 1;
    }
    
    else
        
        return nCr2(n-1,r-1)+nCr2(n-1,r);
}
