#include <stdio.h>
int linearsearch(int arr[], int n, int value)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == value)
            return(i);
    }
    return(-1);
}
int binarysearch(int arr[], int n, int value)
{
    int i,j=0;
    int mid = n / 2;
    if (arr[mid] < value)
    {
        for (i = 0; i < n / 2; i++)
        {
            if (arr[i] == value)
                return(i);
        }
    }
    else if (arr[mid] >= value)
    {
        for (j > n / 2; j <= n; j++)
        {
            if (arr[j] == value)
                return(j);
        }
    }
    else if(arr[mid]==value)
        return(mid);
    else
        return(-1);
}
int sort(int arr[], int n)
{
    int b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                b = arr[i];
                arr[i] = arr[j];
                arr[j]= b;
                
            }
            return(arr[j]);
        } 
    }
}
int main()
{
    int a[] = { 10, 20, 80, 30, 60, 110, 100, 130, 170 };
    int pos;
    int n = sizeof(a) / sizeof(a[0]);
    pos = linearsearch(a, n, 110);
    printf("Linear Search Position of 110 is %d\n", pos);
    printf("Elements Sorted are:\n");
    sort(a, n);
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", a[j]);
    }
    pos = binarysearch(a, n, 110); 
    printf("Since Binary sort requires to search sorted array so sorting is done first");
    printf("Binary Search Position of 110 is %d\n", pos);
}
