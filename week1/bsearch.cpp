#include<stdio.h>

using namespace std;
int search(int a[],int first,int last,int val)
{
    int mid;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==val)
        {
            return mid;
        }
        else if(a[mid]<val)
        {
            first=mid+1;
        }
        else
        last=mid-1;
    }
    return -1;
}



int bsearch(int a[],int first,int last,int val)
{
    int mid;
    if(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==val)
        return mid;
        else if(a[mid]<val)
        return bsearch(a,mid+1,last,val);
        else
        return bsearch(a,first,mid-1,val);
    }
    else
    return -1;
}


int main()
{
    int n,val,i;
    printf("Enter the length of array:\n");
    scanf("%d",&n);
    int a[n];

    printf("enter the elements in sorted order\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter the value to be searched\n");
    scanf("%d",&val);

    int x=bsearch(a,0,n-1,val);
    if(x==-1)
    printf("Element not found");
    else
    printf("Element found at index %d\n",x+1);
    return 0;
}
