#include <stdlib.h>
#include <string.h>

int main(void) {
    while (1) {
        char *request = malloc(1024);
        if (request == NULL) {
            return 1;
        }
        strcpy(request, "a request");
        /* 模拟处理 request */
    }
}
