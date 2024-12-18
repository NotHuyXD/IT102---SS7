#include <stdio.h>
int main(){
    int a[5]={1,3,8,7,6};
    for (int i=0;i<5;i++){
        if (a[i]%2==0){
            a[i]+=3;
        }
        else {
            a[i]+=2;
        }
        printf("%d ", a[i]);
    }
    return 0;
}