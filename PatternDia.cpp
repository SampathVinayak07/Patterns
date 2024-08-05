#include<stdio.h>
int small(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if((i>=3*(n/4) && j>=n/2 && i+j<=3*(n/2)) || (i+j>=n-1 && j<=n/4) || (i+j>=n-1 && i<=n/2 && j<=3*(n/4)))
                printf("*");
            else
                printf("-");
        printf("\n");
    }
}
int barfi(int n){
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i+j>=n/2 && i-j<=n/2 && i+j<=3*(n/2) && i-j>=(-(n/2)))
                printf("*");
            else
                printf("-");
        printf("\n");
    }
}
int otriangle(int n){
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i<=n/2 && i+j>=n/2 && i-j>=(-(n/2)))
                printf("*");
            else
                printf("-");
        printf("\n");
    }
}
void pat(int n){
        n=n|1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
           
                if(((i-j>=0 && i+j<=n-1)||
                (i-j<=0 && i+j>=n-1)) ||
                    !(i+j>=n/2 && i+j<=3*(n/2) && i-j<=n/2 && i-j>=-(n/2)))
                    printf("*");
                else
                    printf("-");
            printf("\n");
        }
           
        return;
    }
   
int main(){
	int n = 11;
	otriangle(n);
}
