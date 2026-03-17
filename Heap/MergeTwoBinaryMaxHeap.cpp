#include <bits/stdc++.h>
using namespace std;

void Heapify(vector<int> &c, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left <= n && c[left] > c[largest])
        largest = left;

    if (right <= n && c[right] > c[largest])
        largest = right;

    if (largest != i)
    {
        swap(c[largest], c[i]);
        Heapify(c, n, largest);
    }
}
vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
{
    vector<int> c;
    for (int x : a)
    {
        c.push_back(x);
    }
    for (int x : b)
    {
        c.push_back(x);
    }
    int s = c.size();
    for (int i = (s / 2)-1; i >= 0; i--)
    {
        Heapify(c, s, i);
    }

    return c;
}
int main()
{

    vector<int> a = {10, 5, 6, 2};
    vector<int> b = {12, 7, 9};
    int n = 4;
    int m = 3;
    vector<int> ans = mergeHeaps(a, b, n, m);
    for (int x : ans)
    {
        cout << x << " ";
    }
}