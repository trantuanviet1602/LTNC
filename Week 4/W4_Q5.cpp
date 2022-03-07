bool isPrime (int number)
{
    if(number<=1) return false;
    else
    {
        int count=0;
        for(int i=1;i*i<=number;i++)
        {
            if (number%i==0) count++;
        }
        if(count==1) return true;
        else return false;
    }
}
