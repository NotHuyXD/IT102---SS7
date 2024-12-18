#include <stdio.h>
int main(){
    int N, a[N];
    printf("Nhập số phần tử cho mảng: ");
    scanf("%d", &N);
    for (int i =0; i<N; i++){
        printf("Nhập phần tử cho a[%d]:", i);
        scanf("%d", &a[i]);
    }
    return 0;
}