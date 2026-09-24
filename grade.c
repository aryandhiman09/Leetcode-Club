#include <stdio.h>

int* gradingStudents(int grades[], int n) {

    for (int i = 0; i < n; i++) {

        if (grades[i] >= 38) {

            int next = ((grades[i] / 5) + 1) * 5;

            if (next - grades[i] < 3) {
                grades[i] = next;
            }
        }
    }

    return grades;
}

int main() {
    int n;
    scanf("%d", &n);

    int grades[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    gradingStudents(grades, n);

    for (int i = 0; i < n; i++) {
        printf("%d\n", grades[i]);
    }

    return 0;
}
