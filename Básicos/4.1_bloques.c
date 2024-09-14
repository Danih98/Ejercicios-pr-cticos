#include <stdio.h>

int main() {
    int num=5;
    {
        int num=10;
        {
            int num=20;
        }
    }

    printf("%d",num);
    return 0;
}

