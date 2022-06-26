/*************************************************************************
    > File Name: guess.c
    > Author: myiuni
    > Mail: myiuni@163.com 
    > Created Time: 2022年06月26日 星期日 21时02分03秒
 ************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i;
    srand(time(NULL));
    int res = rand()%100 + 1;

    printf("Please input the number i:\n");
    while (1) {
        scanf("%d", &i);
        if (i < res)
            printf("small\n");
        else if (i > res)
            printf("big\n");
        else {
            printf("You are right\n");
            break;
        }
    }
}
