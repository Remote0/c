/*************************************************************************
	> File Name: 6.my_printf.c
	> Author: Boyu Ren
	> Mail: renboyu2333@gmail.com
	> Created Time: Wed 01 Sep 2021 10:48:44 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>


int my_printf(const char *frm, ...) {
    va_list arg;
    va_start(arg, frm);
    int cnt = 0;
    #define PUTC(a) putchar(a), ++cnt;
    for (int i = 0; frm[i]; i++) {
        switch (frm[i]) {
            case '%': {
                switch (frm[++i]) {
                    case '%' : PUTC(frm[i]); break;
                    //两个%%只输出第一个
                    case 'd' : {
                        int x = va_arg(arg, int), temp = 0;
                        while (x) {
                            temp = x % 10 + temp * 10;
                            x /= 10;
                        }
                        while (temp) {
                            PUTC(temp % 10 + 48);
                            temp /= 10;
                        }
                    }

                }
            } break;
            default : PUTC(frm[i]);
        }
        putchar(frm[i]);
    }
    return cnt;
    #undef PUTC
    va_end(arg);
}

int main() {
    int a = 123;
    my_printf("hello world\n");
    printf("hello world\n");
    my_printf("%d\n", a);
    printf("%d\n", a);
    return 0;
}
