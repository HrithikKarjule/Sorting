#include<stdio.h>
void bubble_sort(int ar[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
        {
        printf("\nEnter Array Element [%d]:",i+1);
        scanf("%d",&ar[i]);
        }
    printf("\nEntered Array:\n");
        for(i=0;i<n;i++)
        {
        printf("%d\t",ar[i]);
        }
    for(i=0;i<n-1;i++)
        {
        for(j=0;j<n-i-1;j++)
            {
            if(ar[j]>ar[j+1])
                {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                }
            }
        }
    printf("\nSorted Array:\n");
    for(i=0;i<n;i++)
        {
        printf("%d\t",ar[i]);
        }
}
main()
{
int ar[10],n;
printf("Enter Number of Elements in Array:");
scanf("%d",&n);
bubble_sort(ar,n);
}
