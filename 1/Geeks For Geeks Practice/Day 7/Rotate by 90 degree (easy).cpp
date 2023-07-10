/*
        3 2 1
        6 5 4
        9 8 7

        transpose
        */
// rev rows
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n / 2; j++)
    {
        swap(v[i][j], v[i][n - j - 1]);
    }
}
// transpose
for (int i = 0; i < n; i++)
{
    for (int j = i + 1; j < n; j++)
    {
        swap(v[i][j], v[j][i]);
    }
}