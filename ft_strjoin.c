#include "libft.h"

void static    copy_join(char *join, char **strs, char *sep, int size)
{
    int i_join;
    int i;
    int j;

    i_join = -1;
    j = -1;
    while (++j < size)
    {
        i = -1;
        while (strs[j][++i])
            join[++i_join] = strs[j][i];
        i = -1;
        if (j < size - 1){
            while (sep[++i])
                join[++i_join] = sep[i];
        }
    }
    join[++i_join] = '\0';
}
 
char    *ft_strjoin(int size, char **strs, char *sep)
{
    int total_len = ft_strlen(sep) * (size - 1);
    int i;
    i = -1;
    while (++i < size)
    {
        total_len += ft_strlen(strs[i]);
    }
    char *join = malloc(sizeof(char) * (total_len + 1));
    if (join == NULL)
        return NULL;
    i = 0;
    int j;
    j = 0;
    copy_join(join, strs, sep, size);
    return (&join[0]);
}