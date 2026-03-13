#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{

    int smallest= i;
    int leftidx = 2 * i;
    int rightidx = 2 * i + 1;

    if (leftidx < n && arr[smallest] > arr[leftidx])
    {

      smallest= leftidx;
    }
    if (rightidx < n && arr[smallest]>arr[rightidx])
    {
        smallest= rightidx;
    }

    if (smallest != i)
    {
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
}
int main()
{

    int arr[7] = {-1, 1, 3, 6, 5, 9, 8};
    int n = 6;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "Printing the Array now" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// O(n)