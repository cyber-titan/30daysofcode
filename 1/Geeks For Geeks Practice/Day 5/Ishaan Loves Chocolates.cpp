/*
5 9 2 6
  ij
*/
int i = 0, j = n - 1;
while (i < j)
{
    if (v[i] < v[j])
    {
        j--;
    }
    else
    {
        i++;
    }
}
return v[i];