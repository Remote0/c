/*************************************************************************
	> File Name: 145.c
	> Author: Boyu Ren
	> Mail: renboyu2333@gmail.com
	> Created Time: Thu 09 Sep 2021 08:27:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {
    int n;
    char name[100], temp[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", name);
        if (strlen(name) > strlen(temp)) {
            strcpy(temp, name);
        }
    }
    printf("%s\n", temp);
    return 0;
}
