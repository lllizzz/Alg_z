#include <iostream>
#include <vector>

using namespace std;

int seconds(int sec, int min, int hour)
{
    return sec + min * 60 + hour * 3600;
}

int days(int day, int month, int year)
{
    int sum = day + (year - 1) * 365;
    for (int i = month - 1; i != 0; --i)
    {
        if (i == 2)
        {
            sum += 28;
        }
        else if (i <= 7 && i % 2 == 1 || i > 7 && i % 2 == 0)
        {
            sum += 31;
        }
        else
        {
            sum += 30;
        }
    }
    return sum;
}


int main()
{
    vector<int> st(6);
    for (size_t i = 0; i < st.size(); ++i)
    {
        cin >> st[i];
    }

    vector<int> fin(6);
    for (size_t i = 0; i < fin.size(); ++i)
    {
        cin >> fin[i];
    }

    int secs1, secs2;
    int days1, days2;

    secs1 = seconds(st[5], st[4], st[3]);
    secs2 = seconds(fin[5], fin[4], fin[3]);
    days1 = days(st[2], st[1], st[0]);
    days2 = days(fin[2], fin[1], fin[0]);

    if (secs2 < secs1)
    {
        secs2 += (24 * 3600);
        days2 -= 1;
    }
    cout << days2 - days1 << " " << secs2 - secs1;
}