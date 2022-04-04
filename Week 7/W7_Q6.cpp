#include <algorithm>
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2)
{
    int newLen=lenArr1+lenArr2;
    int * returning= new int [newLen];
    for(int i=0;i<lenArr1;i++)
    {
        returning[i]=firstArr[i];
    }
    for(int i=lenArr1;i<newLen;i++)
    {
        returning[i]=secondArr[i-lenArr1];
    }
    sort(returning,returning+newLen);
    if(firstArr[0]<firstArr[lenArr1-1]) return returning;
    else 
    {
        int * final= new int [newLen];
        for(int i=0;i<newLen;i++)
        {
            final[i]=returning[newLen-1-i];
        }
        return final;
    }
}
