#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int Sum(multiset<vector<int>> posl, vector<int> num)
{
    int sum = 0;
    for (const auto& i : posl)
    {
        for (size_t j = 0; j < min(i.size(), num.size()) && i[j] == num[j]; ++j)
        {
            ++sum;
        }
    }
    return sum;
}

int main()
{
    multiset<vector<int>> posl;
    vector<int> num;
    int n, k;
    int sum = 0;
    cin >> n;
    while (n != 0)
    {
        num.clear();
        cin >> k;
        for (size_t i = 0; i < k; ++i)
        {
            int j;
            cin >> j;
            num.push_back(j);
        }
        sum += Sum(posl, num);
        posl.insert(num);
        --n;
    }
    cout << sum;
}