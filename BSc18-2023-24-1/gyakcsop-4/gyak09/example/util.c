void create_string(char ch, int n, char dest[])
{
    int i = 0;
    for (; i < n; ++i)
    {
        dest[i] = ch;
    }
    dest[i] = '\0';
}
