#include <stdio.h>
int main(){
    int a[5]={3,4,8,6,7};
    for (int i = 0; i<5; i++){
        if(a[i]%2==0){
            printf("%d ", a[i]);
        }
    }
    return 0;
}