Date:2/10/2026

  link:https://leetcode.com/problems/add-digits/?envType=problem-list-v2&envId=math

int addDigits(int num) {
    int sum;

    while (num >= 10) {
        sum = 0;

        while (num > 0) {
            sum = sum + num % 10;
            num = num / 10;
        }

        num = sum;
    }

    return num;
}
