sort(v, v + n);

for (int i = 0; i < n - 2; i++)
{
    int j = i + 1, k = n - 1;
    while (j < k)
    {
        if (v[i] + v[j] + v[k] == x)
            return 1;
        if (v[i] + v[j] + v[k] < x)
            j++;
        else
            k--;
    }
}
return 0;