#include<stdio.h>
#include<math.h>

int main()
{

    int i,t,sdata;
    printf("Please enter your array size :\n");
    scanf("%d",&t);

    int arr[t];
    int low=0,high,mid;
    high=t-1;

    int   h=t-1;
    int  l=0;
    printf("Please enter your array values :\n");
    for(i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Please enter a data that you want to search :");
    scanf("%d",&sdata);
    for(i=0; ; i++)
    {
        mid=(high+low)/2;

        if(sdata>arr[h] || sdata<arr[l])
        {
            printf("Your searched data out of arrary.\n");
            break;
        }
        if(arr[mid]==sdata)
        {
            printf("%d data is arr position %d\n",sdata,mid);
            break;
        }
        else if(arr[mid]>sdata)
        {
            low=0;
            high=mid-1;
        }
        else if(arr[mid]<sdata)
        {
            low=mid+1;
        }
    }

    return 0;
}
