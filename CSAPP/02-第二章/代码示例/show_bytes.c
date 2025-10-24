#include <stdio.h>
#include <string.h>

void show_bytes(unsigned char *start, int len) {
    for (int i = 0; i < len; i++) {
        // start[i] 是一个字节，每个字节有 2 个十六进制数字
        // start[i] 是一个语法糖糖，等价于 *(start + i)
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int *pointer){
    printf("Integer value: %d\n", *pointer);
    printf("Hex value: %#x\n", *pointer);
    printf("\n");
}

int main() {
    int x = 0x87654321;          
    show_bytes((unsigned char *)&x, sizeof(x));

    show_int(&x);

    const char *s = "abcdef";
    show_bytes((unsigned char *)s, strlen(s));

    return 0;
}
