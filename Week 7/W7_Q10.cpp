void rFilter(char *s) {
    // Your code goes here
    int len=strlen(s);
    for(int i=len-1;i>=0;i--)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) break;
        else s[i]='_';
    }
}
