/*************************************************************************
	> File Name: 157.c
	> Author: 任博宇 
	> Mail: renboyu@hrbeu.edu.cn / renboyu2333@gmail.com
	> Created Time: Wed Sep 15 14:25:29 2021
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = i; j < n; j++) {
            printf("%c", 'A' + j);
        }

        
    }

    return 0;
}
