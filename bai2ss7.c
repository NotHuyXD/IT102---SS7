#include <stdio.h>
int main(){
    int a[5];
    for (int i=0;i<5;i++){
        printf("Nhập 1 số nguyên cho a[%d]:\n", i);
        scanf("%d", &a[i]);
    }
    for (int i=0; i<5;i++){
        printf("%d ", a[i]);
    }
    return 0;

}