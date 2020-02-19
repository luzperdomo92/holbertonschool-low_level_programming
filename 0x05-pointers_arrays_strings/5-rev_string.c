/**
* rev_string -  prints a string in reverse
*@s:an array of int
* Return: Always 0.
*/
void rev_string(char *s)
{
int size;
int end;
int i;
char swap[1000];

for (size = 0; s[size] != '\0'; size++)
{
}
end = size - 1;

for (i = 0; i < size ; i++)
{
swap[end] = s[i];
end--;
}
for (i = 0; i < size ; i++)
{
s[i] = swap[i];
}
}

