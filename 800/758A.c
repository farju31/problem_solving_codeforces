#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);

    int a[1000000];
    int sum=0;
    int max=0;
    for(int i=0;i<n;i++){
        
        scanf("%d",&a[i]);

        sum+=a[i];

        if(a[i]>max){
            max=a[i];
        }

    }
    printf("%d\n",(n*max-sum));


}