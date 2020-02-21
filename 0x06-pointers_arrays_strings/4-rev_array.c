/**
* reverse_array -  prints a string in reverse
*@a:an array of int
*@n:size
* Return: Always void.
*/
void reverse_array(int *a, int n)
{
int end;
int i;
int swap[n];

end = n - 1;

for (i = 0; i < n ; i++)
{
swap[end] = a[i];
end--;
}
for (i = 0; i < n ; i++)
{
a[i] = swap[i];
}
}

