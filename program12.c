#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int no = 0;

    printf("Enter number : \n");
    if(scanf("%d",&no) != 1)                           //this !=1 return va
    {                                                  // if input is right then return value should be 1   if 33 is given as input then it executes input is valid block  
        fprintf(stderr,"Invalid input\n");             //  if input is wrong then return value should be 0  if hello is given as input then it executes input is Invalid block  
        
        return EXIT_FAILURE;
    }

    printf("Input is valid\n");

   

    return EXIT_SUCCESS;
}