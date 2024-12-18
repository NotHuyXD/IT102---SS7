#include <stdio.h>
#include <math.h>
int main(){
    int N;
    printf("Hãy nhập số phần tử có trong mảng: ");
    scanf("%d", &N);
    int arr[N];
    for (int i=0;i<N;i++){
        printf("Phần tử của arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("Những phần tử là số nguyên tố trong mảng là: \n");
    for (int i=0;i<N;i++){
        int check=1;
        if (arr[i]<2){
            check=0;
        }
    for (int e = 2; e <= sqrt(arr[i]); e++) {
        if (arr[i] % e == 0){
            check=0;
        }
    }
    if (check==1){
        printf("%d ", arr[i]);
    }
    }
    return 0;
}