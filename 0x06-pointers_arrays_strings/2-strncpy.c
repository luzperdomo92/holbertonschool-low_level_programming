/**
* _strncpy -  copy array
*@dest:an array of char
*@src:an array of char
*@n:size
* Return: Always dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int concat;
int use_src = 1;
for (concat = 0; concat < n; concat++)
{
if (src[concat] == '\0')
{
use_src = 0;
}

if (use_src == 1)
{
dest[concat] = src[concat];
}
else
{
dest[concat] = '\0';
}
}
return (dest);
}

