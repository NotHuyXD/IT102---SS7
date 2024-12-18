#include <stdio.h>
int main(){
    int r,l;
    printf("Nhập số hàng của mảng 2 chiều:\n");
    scanf("%d", &r);
    printf("Nhập số cột cho mảng 2 chiều:\n");
    scanf("%d", &l);
    int arr[r][l];
    for (int row=0;row<r;row++){
        for (int col=0;col<l;col++){
            printf("Nhập phần tử cho arr[%d][%d]:\n", row, col);
            scanf("%d", &arr[row][col]);
        }
    }
    printf("Các số nằm trên đường biên trong mảng là: \n");
    for (int row=0;row<r;row++){
        for (int col=0;col<l;col++){
            if (col==0 || col==l-1 || row==0 || row==r-1){
            printf("%d ", arr[row][col]);
        }
        else {
            printf("  ");
        }
    }
    printf("\n");
    }
    return 0;
}