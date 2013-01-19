#include <iostream>

using namespace std;

void mergearray(int a[],int left,int mid,int right,int temp[])
{
    int i,j,k;
    for(i=left,j=mid+1,k=0;i<=mid&&j<=right;)
    {
        if(a[i]<=a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=right)
    {
        temp[k++]=a[j++];
    }
    for(i=0;i<k;i++)
    {
        a[left+i]=temp[i];
    }
}

void mergesort(int a[],int left,int right,int temp[])
{
    if(left<right)
    {
        int mid=(left+right)/2;
        mergesort(a,left,mid,temp);
        mergesort(a,mid+1,right,temp);
        mergearray(a,left,mid,right,temp);
    }
}

int main()
{
    int a[10]={72,6,57,88,60,42,83,73,48,85};
    int *p=new int[10];
    mergesort(a,0,9,p);
    delete[] p;
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
