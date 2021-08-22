#include<stdio.h>
int main(){
	int n;
		printf("Number is ");
        scanf("%d", &n);
        int i=0;
        printf("Even number is \t");
        while(i<=n){
                printf("%d\t",i);
                i += 2;
        }
       printf("\n");
        int j=1;
        printf("Odd number is\t");
        while(j<=n){
                printf(" %d\t",j);
                j += 2;
        }
        return 0;
}
        