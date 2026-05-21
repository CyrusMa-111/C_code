#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 检查当前机器字节序的函数
int check_sys() {
    int i = 1;
    // i的十六进制表示为 0x00 00 00 01
    // 如果是小端，低地址存放的是 01
    // 如果是大端，低地址存放的是 00

    // (char*)&i 取出i所在的起始（低）地址，并强转为char*，每次只读1个字节
    return (*(char*)&i);
}

int main() {
    if (check_sys() == 1) {
        printf("当前是：小端模式 (低低高高)\n");
    }
    else {
        printf("当前是：大端模式\n");
    }
    return 0;
}