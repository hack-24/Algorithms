#include <stdio.h>
#include <stdlib.h>


struct Array {
    
    int A[10];
    int size;
    int length;
    
};

int main(int argc, char **argv)
{
	struct Array arr={{22,33,44,55,66,77,88,99},10,8};
    printf(" %d \n",BinarySearch(arr,88));
    printf(" %d \n",RBinarySearch(arr.A,0,arr.length,99));
    return(0);
}

//iterative Binary Search
int BinarySearch( struct Array arr,int key){
    
    int l,mid,h;
    
    l=0;
    h=arr.length-1;
    
    while(l<=h){
        
        mid=(l+h)/2;
        
        if(key==arr.A[mid])
            return mid;
            
            
            else if(key<arr.A[mid])
                h=mid-1;
                
                else 
                    l=mid+1;
                
        
    }
    
    return -1;
    
    
    
    
    
}


//Recursive Binary Search
int RBinarySearch(int a [],int l,int h,int key){
    
    
    
    int mid;
    
    while(l<=h){
    mid=(l+h)/2;
    
    if(key==a[mid]){
        return mid;
    } 
        else if(key<a[mid]){
          return RBinarySearch(a,l,mid-1,key);
            
        } 
            else{
                
                return RBinarySearch(a,mid+1,h,key);
          
                
                
                
    }
    
    return -1;
        
    
    
    
    
    
    
}
}