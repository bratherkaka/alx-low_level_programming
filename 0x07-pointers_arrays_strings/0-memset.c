char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;
        char *p = s;

        for (i = 0; i < n; i++)
        {
                *p = b;
                p++;
        }

        return s;
}
