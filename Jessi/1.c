#include <stdio.h>
int main()
{
    int n : scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    for (int i = 0; i < n; i++)
    {
        int small = -1;
        int left, right;
        left = i - 1;
        right = i + 1;
        // For smaller
        while (left >= 0 || right < n)
        {
            if (left >= 0 && a[left] < a[i])
            {
                small = left;
                break;
            }
            if (right < n && a[right] < a[i])
            {
                small = right;
                break;
            }
            left--;
            right++;
        }

        // For greater
        int big = -1;
        left = i - 1;
        right = i + 1;
        while (left >= 0 || right < n)
        {
            if (left >= 0 && a[left] > a[i])
            {
                big = left;
                break;
            }
            if (right < n && a[right] > a[i])
            {
                big = right;
                break;
            }
            left--;
            right++;
        }
        int ans = ((left == -1) ? 0 : a[left]) + ((right == -1) ? 0 : a[right]);
        printf("%d ", ans);
    }
    printf("\n");
}