#include <stdio.h>

int main() {
    int numInt;
    int denInt;
    scanf("%d %d",&numInt,&denInt);
    for (int i = 0; i<3; i++){
        numInt /= denInt;
        printf("%d ", numInt);
    }
    printf("\n");
    return 0;
}
