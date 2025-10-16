#include<stdio.h>
#include<stdlib.h>
int main()
{
    int length = 0;
    int*Arr=NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&length);
    //step1 allocate memory
    Arr = (int*)calloc(length,sizeof(int));
    if(Arr==NULL)
    {
        printf("Unable toallocate memory::\n");
        
    }
    else
    {
        printf("Memory allocated Successfully >>>\n");
    }
    //use the memory
    
    // freee memory
    free(Arr);

    return 0;
}