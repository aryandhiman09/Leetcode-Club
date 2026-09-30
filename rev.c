#include <stdio.h>

int beautifulDays(int i, int j, int k)
{
    int count = 0;

    for (int day = i; day <= j; day++)
    {
        int n = day;
        int rev = 0;

        while (n > 0)
        {
            int rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }

        int diff = day - rev;

        if (diff < 0)
        {
            diff = -diff;
        }

        if (diff % k == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int i, j, k;
    scanf("%d %d %d", &i, &j, &k);

    int result = beautifulDays(i, j, k);

    printf("%d\n", result);

    return 0;
}
