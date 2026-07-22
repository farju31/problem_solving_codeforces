#include<stdio.h>
#include<stdlib.h>
int main (){

    char s[10000];
    scanf("%s",s);
    char start='a';

    int step;
    int sum=0;

    for(int i=0;s[i]!='\0';i++){

        step= abs(s[i]-start);

        step= step>(26-step) ? 26-step : step;
        
        start=s[i];

        sum+=step;

    }
printf("%d\n",sum);

}