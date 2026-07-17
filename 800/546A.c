#include<stdio.h>
int main (){
    int k;

    long long n;
    int w;

    scanf("%d %lld %d",&k, &n, &w);

    long long sum= k* (w*(w+1))/2;

    if(sum>n){
        printf("%lld\n",(sum-n));
    }
    else {

        printf("0\n");
    }


}