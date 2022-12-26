/*
#include <stdio.h>

void findMissing(int arr[], int N)
{
    int temp[N + 1];
    for (int i = 0; i <= N; i++) {
        temp[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        temp[arr[i] - 1] = 1;
    }

    int ans;
    for (int i = 0; i <= N; i++) {
        if (temp[i] == 0)
            ans = i + 1;
    }
    printf("%d", ans);
}


int main()
{
    int arr[] = { 1, 3, 7, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findMissing(arr, n);
}





#include <stdio.h>

// Find the missing number in a given array
int getMissingNumber(int arr[], int n)
{
    // the actual size is `n+1` since a number is missing from the array
    int m = n + 1;

    // get a sum of integers between 1 and `n+1`
    int total = m * (m + 1) / 2;

    // get an actual sum of integers in the array
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // the missing number is the difference between the expected sum
    // and the actual sum
    return total - sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The missing number is %d", getMissingNumber(arr, n));

    return 0;
}

*/





#include <stdio.h>

int main()
{
    int arr[] = { 1, 2, 3, 5, 6 };

    int size = 0;
    int i = 0;
    int missing = 0;

    size = sizeof(arr) / sizeof(arr[0]);

    missing = (size + 1) * (size + 2) / 2;

    for (i = 0; i < size; i++)
        missing = missing - arr[i];

    printf("Missing number is: %d\n", missing);

    return 0;
}
