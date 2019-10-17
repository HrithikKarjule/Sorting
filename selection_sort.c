#include<stdio.h>
void selection_sort(int ar[],int n)
{
    int i,j,temp,min;
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
        min=i;
        for(j=i+1;j<n;j++)
            {
            if(ar[j]<ar[min])
                {
                min=j;
                }
            }
        temp=ar[min];
        ar[min]=ar[i];
        ar[i]=temp;
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
selection_sort(ar,n);

}
