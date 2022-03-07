void readArray(int array[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
}
bool compareArray(int array1[], int array2[], int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(array1[i]==array2[i]) count++;
    }
    if(count==n) return true;
    else return false;
}
