int ft_strlcpy(char *dst, const char *src, int dstsize)
{
    int i;
    int len;

    len = 0;
    while (src[len])
        len++;
    if (dstsize == 0 || !dst)
        return (len);
    i = -1;
    while (++i < dstsize - 1 && src[i])
        dst[i] = src[i];
    dst[i] = '\0';
    return (len);
}