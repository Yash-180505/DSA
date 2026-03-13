#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{

    int largest = i;
    int leftidx = 2 * i;
    int rightidx = 2 * i + 1;

    if (leftidx < n && arr[largest] < arr[leftidx])
    {

        largest = leftidx;
    }
    if (rightidx < n && arr[largest] < arr[rightidx])
    {
        largest = rightidx;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}
int main()
{

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
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