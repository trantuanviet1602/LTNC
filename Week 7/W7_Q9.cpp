void reverse(char *s) {
    // Your code goes here
    int len=strlen(s);
    char *s1= new char [len];
    for(int i=0;i<len;i++)
    {
        s1[i]=s[len-1-i];
    }
    for(int i=0;i<len;i++)
    {
        s[i]=s1[i];
    }
}
