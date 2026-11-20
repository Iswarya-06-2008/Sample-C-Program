//Reading and Displaying array elements using Function
#include<stdio.h>
void display(int *x, int a);
int main()
{
    int n;
    printf("Enter the number of elements to be stored in the array : ");
    scanf(" %d",&n);

    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0 ; i<n ; i++)
    {
        scanf(" %d",&arr[i]);
    }
    display(arr,n);
    return 0;
}

void display(int *x, int a)
{
    printf("Array Elements : ");
    for(int i=0 ; i<a ; i++)
    {
        printf(" %d\t",x[i]);
    }
}
