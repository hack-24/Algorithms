#include <stdio.h>
#include <stdlib.h>

struct Array *Union(struct Array *arr1,struct Array *arr2);
struct Array *Intrsect(struct Array *arr1,struct Array *arr2);
struct Array *Difference(struct Array *arr1,struct Array *arr2);
void Display(struct Array arr);


struct Array {
    
    
    int A[10];
    int size;
    int length;
};

int main(int argc, char **argv)
{
	struct Array arr1={{2,4,5,7,9},10,5};
    struct Array arr2={{3,5,7,9,10},10,5};
    struct Array *arr3;
    
    //calling the union function
    arr3=Union(&arr1,&arr2);
    
    
    Display(*arr3);
    
    arr3=Intrsect(&arr1,&arr2);
    
    //calling the display function after intersection
    Display(*arr3);
    
    
    //calling the difference function 
    arr3=Difference(&arr1,&arr2);
    
    
    Display(*arr3);
    
    
    
    return(0);
}


//Union for Sorted Arrays
struct Array* Union(struct Array *arr1,struct Array *arr2){
    
    int i,j,k;
    
    i=j=k=0;
    
    struct Array* arr3=(struct Array *)malloc(sizeof(struct Array));
    
    
    while(i<arr1->length && j<arr2->length){
        
        
        
        if(arr1->A[i] <arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
            
               else if(arr2->A[j]<arr1->A[i])
                   arr3->A[k++]=arr2->A[j++];
        
                else{
                    
                    arr3->A[k++]=arr1->A[i++];
                    
                    j++;
                }
        
        
        
    }
    
    for(;i<arr1->length;i++)
        
        arr3->A[k++]=arr1->A[i];
        
        
        
        
     for(;j<arr2->length;j++)
        
        arr3->A[k++]=arr2->A[j];
    
    
    
    arr3->length=k;
    
    
    arr3->size=10;
    
    
    
    return arr3;
    
}


//intersection for sorted Arrays
struct Array* Intrsect(struct Array *arr1,struct Array *arr2){
    
    int i,j,k;
    
    i=j=k=0;
    
    struct Array* arr3=(struct Array *)malloc(sizeof(struct Array));
    
    
    while(i<arr1->length && j<arr2->length){
        
        
        //if the element of the first array is greater than element of second array increament i
        if(arr1->A[i] <arr2->A[j])
            i++;
            //if the element of the first array is Smaller than element of second array increament j
               else if(arr2->A[j]<arr1->A[i])
                   j++;
        
        
              // check for elements common to both the arrays and increment i,j and k
                else if(arr1->A[i]==arr2->A[j]){
                    
                    arr3->A[k++]=arr1->A[i++];
                    
                    j++;
                }
        
        
        
    }
    
   
    
    
    
    arr3->length=k;
    
    
    arr3->size=10;
    
    
    
    return arr3;
    
}

struct Array* Difference(struct Array *arr1,struct Array *arr2){
    
    int i,j,k;
    
    i=j=k=0;
    
    struct Array* arr3=(struct Array *)malloc(sizeof(struct Array));
    
    
    while(i<arr1->length && j<arr2->length){
        
        
        //copying elements from the first Array
        if(arr1->A[i] <arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
               //don't copy the elements from second Array
               else if(arr2->A[j]<arr1->A[i])
                  j++;
               //if elements are equal increment both i and j
                else if(arr1->A[i]==arr2->A[j]){
                    
                    
                    i++;
                    j++;
                }
        
        
        
    }
    
    //copy the remaining elements from 1st array
    for(;i<arr1->length;i++)
        
        arr3->A[k++]=arr1->A[i];
        

    arr3->length=k;
    
    
    arr3->size=10;
    
    
    
    return arr3;
    
}

//display function
void Display(struct Array arr){
    
   
    for(int i=0;i<arr.length;i++){
        
        
        printf("%d ",arr.A[i]);
        
        
    }
    
    printf(" \n ");
    
    
    
    
    
}