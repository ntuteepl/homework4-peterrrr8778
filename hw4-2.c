#include <stdio.h>

int main() {
    int bank[6][3] = {
    {123,456,9000},
    {456,789,5000},
    {789,888,6000},
    {336,558,10000},
    {775,666,12000},
    {566,221,7000}
    };
    int k;

    scanf("%d", &k);
    int l,m;





    for (int j = 0; j < k; j++) {
        scanf("%d%d",&l,&m);
        int search[2]={l,m};
        for(int n=0;n<6;n++){
            if(search[0]==bank[n][0]&&search[1]==bank[n][1]){
                printf("%d",bank[n][2]);
                break;
            }
            else if (n==5){
                printf("error\n");
            }

        }
    }
}

