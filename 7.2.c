/*This program is prepared by 22CE030*/
#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],n,m,i,k,j;
    printf("Enter the array 1 size:");
    scanf("%d",&n);
    printf("Enter the array 2 size:");
    scanf("%d",&m);
    for(i=0; i<n; i++)
    {
        printf("Enter the value of arr1[%d]:",i);
        scanf("%d",&arr1[i]);

    }
    printf("\n");
    for(i=0; i<m; i++)
    {
        printf("Enter the value of arr2[%d]:",i);
        scanf("%d",&arr2[i]);
    }
    printf("\n");
    printf("Merge and Sort of array 1 and 2\n");
    int arr3[m+n];
    for(i=0; i<n; i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=0;i<m;i++)
    {
        arr3[i+n]=arr2[i];
    }

    for(i=0; i<m+n; i++)
    {
        for(j=i+1; j<m+n; j++)
        {
            if(arr3[i]>arr3[j])
            {
                k=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=k;
            }
        }
        printf("%d\t",arr3[i]);
    }
    printf("\nThis program is prepared by 22CE030");
    return 0;
}