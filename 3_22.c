#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    scanf("%d %d %d",&x,&y,&z);

    if (x<y && x<z){
        printf("%d", x);
    } else if (y<z){
        printf("%d",y);
    } else {
        printf("%d",z);
    }
    printf("\n");
    return 0;
}
