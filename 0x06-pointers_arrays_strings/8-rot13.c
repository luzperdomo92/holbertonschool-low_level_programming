/**
* rot13 - compares two strings.
* @string:  char to replace.
* Return: return a string.
*/
char *rot13(char *string)
{
int length;
int i_le;
char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
'k', 'l', 'm',
'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z',
'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
'K', 'L', 'M',
'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
'X', 'Y', 'Z'};
char letters_rotated[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z',
'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
'k', 'l', 'm',
'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
'X', 'Y', 'Z',
'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
'K', 'L', 'M'
};
for (length = 0; string[length] != '\0'; length++)
{
for (i_le = 0; i_le < 52; i_le++)
{
if (string[length] == letters[i_le])
{
string[length] = letters_rotated[i_le];
break;
}
}
}
return (string);
}

