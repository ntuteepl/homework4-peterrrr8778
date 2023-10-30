#include <stdio.h>

int main() {
    int n;
    printf("請輸入訂單數量：");
    scanf("%d", &n);

    int orders[n][2];

    for (int i = 0; i < n; i++) {
        printf("請輸入第%d筆訂單的出發時間和返回時間（格式：HH HH）：", i + 1);
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

    printf("最少需要的司機數量：%d\n", drivers);
    printf("每位司機的時間表：\n");

    int current_driver = 1;
    last_return = orders[0][1];

    for (int i = 1; i < n; i++) {
        if (orders[i][0] > last_return) {
            printf("司機 %d: %d - %d\n", current_driver, orders[i - 1][0], last_return);
            current_driver++;
            last_return = orders[i][1];
        } else if (orders[i][1] < last_return) {
            last_return = orders[i][1];
        }
    }


    printf("司機 %d: %d - %d\n", current_driver, orders[n - 1][0], last_return);

    return 0;
}
