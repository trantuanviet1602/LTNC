int** inputMatrix(int nRows, int nCols)
{
    int** returning = new int* [nRows];
    for(int i=0;i<nRows;i++)
    {
        returning[i]=new int [nCols];
    }
    for(int i=0;i<nRows;i++)
    {
        for(int j=0;j<nCols;j++)
        {
            cin>>returning[i][j];
        }
    }
    return returning;
}
void printMatrix(int** matrix, int nRows, int nCols)
{
    for(int i=0;i<nRows;i++)
    {
        for(int j=0;j<nCols;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
