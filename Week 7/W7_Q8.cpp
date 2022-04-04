int** transpose(int** matrix, int nRows, int nCols)
{
    int** returning= new int* [nCols];
    for(int i=0;i<nCols;i++)
    {
        returning[i] = new int [nRows];
    }
    for(int i=0;i<nCols;i++)
    {
        for(int j=0;j<nRows;j++)
        {
            returning[i][j]=matrix[j][i];
        }
    }
    return returning;
}
