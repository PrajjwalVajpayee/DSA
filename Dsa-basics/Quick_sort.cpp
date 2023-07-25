#include <bits/stdc++.h>
using namespace std;
int partition(int *arr, int s, int e)
{
    int count = 0;
    int pivot = s;

    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < arr[pivot])
            count++;
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    
    int i = s, j = e;
    
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }
    
    return pivotIndex;
}

void quicksort(int *arr, int s, int e)
{
    if (s >= e)
        return;
    int p = partition(arr, s, e);

    quicksort(arr, p + 1, e);
    quicksort(arr, s, p - 1);
}

int main()
{
    int arr[5] = {3, 2, 6, 5, 4};
    int n = 5;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}