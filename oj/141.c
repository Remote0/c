/*************************************************************************
	> File Name: 141.c
	> Author: Boyu Ren
	> Mail: renboyu2333@gmail.com
	> Created Time: Thu 09 Sep 2021 06:36:13 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n << 1 + 1; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 0; k < abs(n << 1 + 1 - i << 1); k++) {
            printf("%s", "A" + k);
        }
    }

    return 0;
}
