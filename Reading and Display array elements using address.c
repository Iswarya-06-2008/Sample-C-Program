//Reading and Display array elements using address
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements to be stored in an array : ");
    scanf(" %d",&n);

    int arr[n];
    printf("Enter the array elements : ");
    for(int i=0; i<n ; i++)
    {
        scanf(" %d", arr+i);
    }

    printf("The array elements : ");
    for(int i=0; i<n ; i++)
    {
        printf(" %d", *(arr+i));
    }
    return 0;
}
