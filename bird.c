#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int count[6] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    int max = 0;
    int answer = 1;

    for (int i = 1; i <= 5; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            answer = i;
        }
    }

    printf("%d\n", answer);

    return 0;
}
