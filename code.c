#include<stdio.h>

int main()
{
    int n, best=0,worst=0,tmp,tmp1,i;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;++i){
        scanf("%d", &a[i]);
    }
    tmp=a[0];
    tmp1=a[0];
    for(i=0;i<n-1;++i){

        if(a[i+1]>tmp){
            tmp=a[i+1];
            best++;
        }
        else if(a[i+1]<tmp1){
            tmp1=a[i+1];
            worst++;
        }
    }
    printf("%d %d\n",  best,worst);
}
