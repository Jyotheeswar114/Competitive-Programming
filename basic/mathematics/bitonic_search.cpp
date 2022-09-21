#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findbit(vector<int> A, int l, int r)
{

    int mid = (r + l) / 2;
    if (A[mid] > A[mid - 1] && A[mid] > A[mid + 1])
        return mid;
    else if (A[mid - 1] < A[mid] && A[mid] < A[mid + 1])
        return findbit(A, mid, r);
    else
        return findbit(A, l, mid);
}

int asbin(vector<int> A, int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == key)
            return mid;
        else if (A[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int dsbin(vector<int> A, int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == key)
            return mid;
        else if (A[mid] > key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int solve(vector<int> &A, int B)
{
    int n = A.size();
    int bit = findbit(A, 0, n - 1);
    // return bit;
    if (A[bit] < B)
        return -1;
    if (A[bit] == B)
        return bit;
    // int bit = 5;
    int ind = asbin(A, 0, bit, B);
    return ind;
    // if(ind != -1)
    //     return ind;
    // ind = dsbin(A, bit + 1, n - 1, B);
    // return ind;
}
int main()
{
    vector<int> A = {1, 2, 3, 4, 5, 10, 9, 8, 7, 6};
    int B = 5;
    cout << solve(A, B) << endl;
    return 0;
}
