#include <set>
#include <iostream>
#include <iterator>

using namespace std;


int finding(multiset<int> A, multiset<int> B)
{
    int num = A.size() + B.size();
    for (auto i = A.begin(); i != A.end(); ++i)
    {
        if (B.find(*i) != B.end())
        {
            B.erase(B.find(*i));
            num -= 2;
        }
    }
    return num;
}

void erasing(multiset<int>& A, int num)
{
    if (A.find(num) != A.end())
    {
        A.erase(A.find(num));
    }
}

int main()
{
    multiset<int> A;
    multiset<int> B;
    int N, M, Q;
    int sum = 0;
    cin >> N >> M >> Q;
    for (int i = 0; i < N; ++i)
    {
        int num;
        cin >> num;
        A.insert(num);
    }
    for (int i = 0; i < M; ++i)
    {
        int num;
        cin >> num;
        B.insert(num);
    }
    int type, card;
    char player;
    while (Q != 0)
    {
        cin >> type >> player >> card;
        if (type == 1)
        {
            if (player == 'A')
            {
                A.insert(card);
            }
            else
            {
                B.insert(card);
            }
        }
        else
        {

            if (player == 'A')
            {
                erasing(A, card);
            }
            else
            {
                erasing(B, card);
            }
        }
        cout << finding(A, B) << " ";
        --Q;
    }
}