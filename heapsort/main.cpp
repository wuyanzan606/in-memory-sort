#include <iostream>
using namespace std;
void Heapify(int *a,int i,int size)
{
    int max=i;
    int left=2*max+1;
    int right=2*max+2;
    /*for(int j=0;j<size;j++)
    {
        cout<<a[j]<<"  ";
    }
    cout<<endl;*/
    if(i<=size/2-1)
    {
        if(a[left]>=a[i]&&a[right]>=a[i]&&left<size&&right<size)
        {
            if(a[left]<=a[right])
            {
                swap(a[right],a[i]);
                max=right;
            }
            else
            {
                swap(a[left],a[i]);
                max=left;
            }
        }
        else
        {
            if(a[left]>=a[i]&&left<size)
            {
                swap(a[left],a[i]);
                max=left;
            }
            if(a[right]>=a[i]&&right<size)
            {
                swap(a[right],a[i]);
                max=right;
            }
        }
        if(max!=i)
        {
            Heapify(a,max,size);
        }
    }
}
void BuildHeap(int *a,int size)
{
    for(int i=size/2-1;i>=0;i--)
    {
        //cout<<i<<endl;
        Heapify(a,i,size);
    }
}

void HeapSort(int *a,int size)
{
    BuildHeap(a,size);
    for(int i=size-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        size--;
        Heapify(a,0,size);
    }
}


int main()
{
    int a[10]={72,6,57,88,60,42,83,73,48,85};
    HeapSort(a,10);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
