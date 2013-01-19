#include <iostream>

using namespace std;
void shellsort(int a[],int size)
{
    int increment;
    for(increment=size/2;increment>=1;increment/=2)
    {
        for(int i=increment;i<size;i++)
        {
            int temp=a[i];
            int j=i-increment;
            while(j>=0&&a[j]>temp)
            {
                a[j+increment]=a[j];
                j-=increment;
            }
            a[j+increment]=temp;
        }
    }
}
int main()
{
    int a[10]={72,6,57,88,60,42,83,73,48,85};
    shellsort(a,10);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
