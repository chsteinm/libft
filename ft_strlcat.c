int ft_strlcat(char *dst, const char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    s_len;
    unsigned int    d_len;

    s_len = -1;
    while (src[++s_len]);
    i = -1;
    while (dst[++i]);
    if (size < i)
        return (s_len + size);
    d_len = i;
    while (i < size - 1 && *src)
        dst[i++] = *src++;
    dst[i] = 0;
    return (d_len + size);
}