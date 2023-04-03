unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, y, count;

    count = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (y = 0; accept[y] != '\0'; y++)
        {
            if (s[i] == accept[y])
            {
                count++;
                break;
            }
        }
        if (accept[y] == '\0')
            break;
    }

    return (count);
}
