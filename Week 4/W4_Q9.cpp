#include <algorithm>
void swap(float &a, float &b)
{
    float temp=a;
    a=b;b=temp;
}
void sort(float array[], int size, bool isAscending)
{
    sort(array,array+size);
    if(isAscending==false)
    {
        for(int i=0;i<size/2;i++)
        {
            swap(array[i],array[size-1-i]);
        }
    }
}
