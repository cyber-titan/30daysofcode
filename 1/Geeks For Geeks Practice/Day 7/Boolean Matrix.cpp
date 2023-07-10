/*
        rows = 1 1 1 0
        cols = 1 0 0

        1 1 1
        1 1 1
        1 1 1
        1 0 0
        */
int n = v.size(), m = v[0].size();
vector<int> rows(n), cols(m);
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if (v[i][j] == 1)
        {
            rows[i] = 1;
            cols[j] = 1;
        }
    }
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if (rows[i] or cols[j])
            v[i][j] = 1;
    }
}