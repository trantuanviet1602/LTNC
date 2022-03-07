void printArrow(int n, bool left)
{
    string star[n];star[0]="*";
    string space[n];space[0]="";
    string space_left[n];space_left[0]="";
    for(int i=1;i<n;i++)
    {
        star[i]=star[i-1]+"*";
        space[i]=space[i-1]+"  ";
        space_left[i]=space_left[i-1]+" ";
    }
    if(left==false)
    {
        for(int i=n-1;i>=0;i--)
        {
            cout<<space[n-1-i]<<star[i]<<endl;
        }
        for(int i=1;i<n;i++)
        {
            cout<<space[n-1-i]<<star[i]<<endl;
        }
    }
    else
    {
        for(int i=n-1;i>=0;i--)
        {
            cout<<space_left[i]<<star[i]<<endl;
        }
        for(int i=1;i<n;i++)
        {
            cout<<space_left[i]<<star[i]<<endl;
        }
    }
}
