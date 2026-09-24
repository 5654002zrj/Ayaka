#include <stdio.h>

// 获取一个字符串
char *get_name(void) {
    char name[] = "Lingrui";
    return name;
}

int main(void) {
    char *name = get_name();
    printf("%s\n", name);
    return 0;
}
