#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

size_t find(vector<string>& name, string& str)
{
    for (size_t i = 0; i < name.size(); ++i)
    {
        if (name[i] == str)
        {
            return i;
        }
    }
}

int sum(vector<vector<int>>& tabl, set<size_t>& it)
{
    int NewSum = 0;
    for (size_t i = 0; i < tabl.size(); ++i)
    {
        if (it.find(i) == it.end())
        {
            for (size_t j = 0; j < tabl[0].size(); ++j)
            {
                NewSum += tabl[i][j];
            }
        }
    }
    return NewSum;
}

void bigger(vector<vector<int>>& tabl, set<size_t>& it, int val, vector<string>& name, string& ColName)
{
    for (size_t i = 0; i < tabl.size(); ++i)
    {
        if (it.find(i) == it.end() && tabl[i][find(name, ColName)] <= val)
        {
            it.insert(i);
        }
    }
}
void smaller(vector<vector<int>>& tabl, set<size_t>& it, int val, vector<string>& name, string& ColName)
{
    for (size_t i = 0; i < tabl.size(); ++i)
    {
        if (it.find(i) == it.end() && tabl[i][find(name, ColName)] >= val)
        {
            it.insert(i);
        }
    }
}

int main()
{
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<vector<int>> tabl(N, vector<int>(M));
    vector<string> name(M);
    set<size_t> it;
    for (size_t i = 0; i < name.size(); ++i)
    {
        cin >> name[i];
    }

    for (size_t i = 0; i < tabl.size(); ++i)
    {
        for (size_t j = 0; j < tabl[0].size(); ++j)
        {
            cin >> tabl[i][j];
        }
    }

    string ColName;
    int val;
    char q;

    while (Q != 0)
    {
        cin >> ColName >> q >> val;
        if (q == '>')
        {
            bigger(tabl, it, val, name, ColName);
        }
        else
        {
            smaller(tabl, it, val, name, ColName);
        }
        --Q;
    }
    cout << sum(tabl, it);
}