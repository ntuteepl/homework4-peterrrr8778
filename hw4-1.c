#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a;
        printf("輸入共有幾個質數:");
        scanf("%d",&n);

    int numbers[50];

    for(i=0;i<n;i++){
        scanf("%d/n",&numbers[i]);
    }
    for(i=0;i<n;i++){
        int isprime=1;

        for(a=2;a<numbers[i];a++){
            if(numbers[i]%a==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
            printf("YES");
        }
        else{
            printf("NO");
        }

    }

    }

