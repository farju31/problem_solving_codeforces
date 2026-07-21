#include<stdio.h>
int main (){

    int n,h;

    scanf("%d %d",&n,&h);

    int a[100000];

    int sum=0;
    for(int i=0;i<n;i++){

        scanf("%d",&a[i]);

        
        a[i]= (a[i]>h) ? 2 : 1;
        sum+=a[i];

    }

    printf("%d\n",sum);
}