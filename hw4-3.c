#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int orders[n][2];

    for (int i = 0; i < n; i++) {
        printf("%d", i + 1);
        scanf("%d %d", &orders[i][0], &orders[i][1]);
    }

    int drivers = 1;
    int last_return = orders[0][1];

    for (int i = 1; i < n; i++) {
        if (orders[i][0] > last_return) {

            drivers++;
            last_return = orders[i][1];
        } else if (orders[i][1] < last_return) {

            last_return = orders[i][1];
        }
    }

    printf("%d\n", drivers);


    int current_driver = 1;
    last_return = orders[0][1];

    for (int i = 1; i < n; i++) {
        if (orders[i][0] > last_return) {
            printf("%d: %d - %d\n", current_driver, orders[i - 1][0], last_return);
            current_driver++;
            last_return = orders[i][1];
        } else if (orders[i][1] < last_return) {
            last_return = orders[i][1];
        }
    }


    printf("%d: %d - %d\n", current_driver, orders[n - 1][0], last_return);

    return 0;
}
