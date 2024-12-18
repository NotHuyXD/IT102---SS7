#include <stdio.h>
int main(){
    int a[5]={4,7,1,8,9}, max=0, min=9;
    for (int i=0; i<5;i++){
        if (max<a[i]){
            max=a[i];
        }
    }
    printf("Phần tử lớn nhất trong mảng là: %d\n", max);
    for (int i=0; i<5;i++){
        if (min>a[i]){
            min=a[i];
        }
    }
    printf("Phần tử nhỏ nhất trong mảng là: %d", min);
    return 0;

}