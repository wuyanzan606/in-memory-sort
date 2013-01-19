#include <iostream>

using namespace std;
void insertsort(int a[],int size)
{
    int i;
    for(i=1;i<size;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
int main()
{
    int a[10]={72,6,57,88,60,42,83,73,48,85};
    insertsort(a,10);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
