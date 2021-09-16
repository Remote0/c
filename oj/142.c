/*************************************************************************
	> File Name: 142.c
	> Author: Boyu Ren
	> Mail: renboyu2333@gmail.com
	> Created Time: Thu 09 Sep 2021 07:35:42 PM CST
 ************************************************************************/

#include<stdio.h>

int is_value(int x) {
    int temp = 0;
    temp  = temp * 10 + x % 10;
    x /= 10;
    return temp == x;
}


int is_prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int a, b, flag = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++ ) {
//        printf("%d----%d", is_value(i), is_prime(i));
        
        if (is_value(i) && !is_prime(i)) {
            flag = 1;
            printf("%d", i);
        }
        flag && printf(" ");
    }
    return 0;
}
