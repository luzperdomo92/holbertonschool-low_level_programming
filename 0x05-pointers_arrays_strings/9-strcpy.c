/**
* _strcpy -  duplicate  string.
*@dest: destination string pointer
*@src: source string pointer
* Return: string pointer with duplication.
*/
char *_strcpy(char *dest, char *src)
{
int a = 0;
int interate = 1;
while (interate == 1)
{
dest[a] = src[a];
a++;
if (src[a] == '\0')
{
interate = 0;
}
}
return (dest);
}

