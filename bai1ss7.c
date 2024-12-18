#include <stdio.h>
int main(){
    int a[]= {2,4,6,8,10}, length;
    for (int i=0; i<5;i++){
        printf("%d ", a[i]);
    }
    length=sizeof(a)/sizeof(a[0]);
    printf ("%d", length);
    return 0;
}