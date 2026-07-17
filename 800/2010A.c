#include<stdio.h>
int main (){

    int t;
    scanf("%d",&t);


    while(t--){

        int sum=0;
        int n;
        scanf("%d",&n);

            int a[100000];


        for(int i=0;i<n;i++){


            scanf("%d",&a[i]);

            sum+=(i%2!=0)? -a[i] : a[i];
                
            }


             printf("%d\n",sum);
        }

    }

