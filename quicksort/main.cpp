#include <iostream>

using namespace std;

void quicksort(int *a, int l, int r)
{
    int i=l;
    int j=r;
    int x=a[l];
    while(i<j)
    {
        while(i<j&&a[j]>=x)
        {
            j--;
        }
        if(i<j)
        {
            a[i]=a[j];
            i++;
        }
        while(i<j&&a[i]<=x)
        {
            i++;
        }
        if(i<j)
        {
            a[j]=a[i];
            j--;
        }
    }
    if(i==j)
    {
        a[i]=x;
        quicksort(a,l,i-1);
        quicksort(a,i+1,r);
    }
}
int main()
{
    int a[10]={72,6,57,88,60,42,83,73,48,85};
    quicksort(a,0,9);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
