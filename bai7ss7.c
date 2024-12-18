#include <stdio.h>
int main(){
    int N, a[N];
    printf("Hãy nhập số phần tử cho mảng: ");
    scanf("%d", &N);
    for (int i=0;i<N;i++){
        do {
        printf("Nhập phần tử số chẵn cho a[%d]: \n", i);
        scanf("%d", &a[i]);
        if (a[i]%2==0){
            printf("Phần tử nhập vào phải là số lẻ\n");}
        } while (a[i]%2==0);
    }
    return 0;
}