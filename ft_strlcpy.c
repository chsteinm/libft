int ft_strlcpy(char *dst, const char *src, int dstsize)
{
    int i;
    int len;

    i = -1;
    len = 0;
    while (src[len])
        len++;
    if (dstsize == 0)
        return (len);
    while (++i < dstsize - 1)
        dst[i] = src[i];
    dst[i] = '\0';
    return (len);
}