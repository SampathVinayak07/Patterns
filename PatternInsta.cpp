#include<stdio.h>
void _1(int n){
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			if(i+j<=n-1 && i>=j)
				printf("*");
			else
				printf(" ");
		}
	}
	printf("\n\n");
	return;
}
void _2(int n){
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<2*n;j++){
			if(i+j<=n-1 && i>=j)
				printf("%d",n-j-3);
			else
				printf(" ");
		}
	}
	printf("\n\n");
	return;
}
void _3(int n){
	for(int i=0;i<n;i++){
		printf("\n");
		if(i<=n/2){
			for(int j=((n/2)-i);j<=n/2;j++)
				printf("%d ",j);
		}
		else{
			for(int j=i-n/2;j<=n/2;j++)
				printf("%d ",j);
		}
	}
	printf("\n");
}
void _4(int n){
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<2*n;j++){
			if(i+j<=n-1 && i>=j)
				printf("%c",65+n-j-3);
			else
				printf(" ");
		}
	}
	printf("\n\n");
	return;
}
void _5(int n){
	for(int i=0;i<n;i++){
		printf("\n");
		if(i<=n/2){
			for(int j=((n/2)-i);j<=n/2;j++)
				printf("%c ",65+j);
		}
		else{
			for(int j=i-n/2;j<=n/2;j++)
				printf("%c ",65+j);
		}
	}
	printf("\n");
}
void _6(int n){
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			if(i+j>=n-1 && i<=j)
				printf("*");
			else
				printf(" ");
		}
	}
	printf("\n\n");
	return;
}
void _11(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}
void _12(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("\n");
}
//void one(int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            if(i-j>=0)
//                printf("*");
//            else
//                printf(" ");
//        printf("\n");
//    }
//    return;
//}
//void two(int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            if(i+j>=n-1)
//                printf("*");
//            else
//                printf(" ");
//        printf("\n");
//    }
//    return;
//} 
//void three(int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            if(i+j<=n-1)
//                printf("*");
//            else
//                printf(" ");
//        printf("\n");
//    }
//    return;
//} 
//void four(int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            if(i-j<=0)
//                printf("*");
//            else
//                printf(" ");
//        printf("\n");
//    }
//    return;
//} 
//void five(int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            if(i-j>=n/2 || i-j<=-(n/2) || i+j<=n/2 || i+j>=3*(n/2))
//                printf("*");
//            else
//                printf(" ");
//        printf("\n");
//    }
//    return;
//} 
//void six(int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            if(i-j==n/2 || i-j==-(n/2) || i+j==n/2 || i+j==3*(n/2))
//                printf("*");
//            else
//                printf(" ");
//        printf("\n");
//    }
//    return;
//} 
//void seven(int n){
//    n=n|1;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            if(i-j>=0)
//                printf("%d",j+1);
//            else
//                printf(" ");
//        printf("\n");
//    }
//    return;
//}
//void eight(int n){
//    int num=1;
//    for(int i=1;i<n+1;i++){
//        for(int j=1;j<n+1; j++) {
//            if(i-j>=0){
//                printf("%d ", num);
//                num++;
//            }
//        }
//    printf("\n");
//    }
//    return;
//}
//void nine(int n){
//    int num=1;
//    for(int i=1;i<n+1;i++){
//        for(int j=1;j<n+1; j++) {
//            if(i-j>=0){
//                if(num==10){
//                    num=1;
//                }
//                printf("%d ",num);
//                num++;
//            }
//        }
//    printf("\n");
//    }
//    return;
//}
//void ten(int n){
//    n=n|1;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            if(i-j>=0 && i+j<=n-1)
//                printf("%d",j+1);
//            else
//                printf(" ");
//        printf("\n");
//    }
//    return;
//}
//void eleven(int n){
//    n=n|1;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            if(i+j<=n-1)
//                printf("%c",65+i);
//            else
//                printf(" ");
//        printf("\n");
//    }
//    return;
//}
//void twelve(int n){
//	n=n|1;
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//            if(i+j>=n/2 && i-j>=-(n/2))
//                printf("%c",65+i);
//            else
//                printf(" ");
//        printf("\n");
//    }
//    return;
//}
void _13(int n){
	n=n|1;
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i;j++)
                printf(" ");
        for(int j=1; j<=i;j++){
        	printf("%d ",j);
		}
        printf("\n");
    }
    return;
}
void _14(int n){
	n=n|1;
	char ch;
    for(int i=1;i<n;i++){
    	ch=65+i-1;
        for(int j=1;j<n-i;j++)
                printf(" ");
        for(int j=1; j<=i;j++){
        	printf("%c ",ch);
		}
        printf("\n");
    }
    return;
}

void _15(int n){
	n=n|1;
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i;j++)
                printf(" ");
        for(int j=1; j<=i;j++){
        	printf("%c ",64+j);
		}
        printf("\n");
    }
    return;
}
void _16(int n){
	n=n|1;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-i;j++)
                printf(" ");
        for(int j=0; j<=i;j++){
        	printf("* ");
		}
        printf("\n");
    }
    return;
}
void _17(int n){
	n=n|1;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-i;j++)
                printf(" ");
        for(int j=0; j<=i;j++){
        	printf("%d ",i+1);
		}
        printf("\n");
    }
    return;
}
void _18(int n){
	n=n|1;
    for(int i=n;i>=1;i--){
        for(int j=0;j<n-i;j++)
                printf(" ");
        for(int j=0; j<=i;j++){
        	printf("%c ",i);
    }
    return;
}
}
void _19(int n){
	n=n|1;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-i;j++)
                printf(" ");
        for(int j=0; j<=i;j++){
        	printf("%c ",65+i);
		}
        printf("\n");
    }
    return;
}
void _20(int n){
	n=n|1;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--)
        	printf(" %c ",64+j);
        	
        printf("\n");
    }
    return;
}
void _21(int n){
	n=n|1;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++)
            printf("%c ",65+j);
        	
        printf("\n");
    }
    return;
}
void _22(int n){
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j<=n/2 && i-j>=-(n/2) && i+j>=n/2 && i+j<=3*(n/2))
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _23(int n){
	for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++)
            if(i-j<=n/2 && i-j>=-(n/2) && i+j>=n/2 && i+j<=3*(n/2))
                printf("%d ",i);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _28(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i+j==n/2 || i-j==-(n/2))
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _29(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i+j==n/2 || i-j==-(n/2))
                printf("%d",i+1);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _30(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i+j==n/2 || i-j==-(n/2))
                printf("%d",n-i);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _31(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i+j==n/2 || i-j==-(n/2))
                printf("%c",65+i);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _32(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i+j==n/2 || i-j==-(n/2))
                printf("%c",65+n-i);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _33(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i+j==3*(n/2) || i-j==(n/2))
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _35(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i+j==3*(n/2) || i-j==(n/2))
                printf("%d",n-i);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _37(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i+j==3*(n/2) || i-j==(n/2))
                printf("%c",65+n-i-1);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _38(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j==n/2 || i-j==-(n/2) || i+j==n/2 || i+j==3*(n/2))
                    printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _39(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j==n/2 || i-j==-(n/2) || i+j==n/2 || i+j==3*(n/2)){
                if(i<=n/2)
                    printf("%d",i+1);
                else
                    printf("%d",n-i);
            }
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _41(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j==n/2 or i-j==-(n/2) || i+j==n/2 || i+j==3*(n/2)){
                if(i<=n/2)
                    printf("%c",65+i);
                else
                    printf("%c",65+n-i-1);
            }
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _43(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i+j<=n/2 || i-j<=-(n/2))
                    printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _44(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i+j>=3*(n/2) || i-j>=(n/2))
                    printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _45(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if((i-j>=0 && i+j<=n-1) || (i-j<=0 && i+j>=n-1))
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _48(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if((i<=n/2 && i-j>=0 && i+j>=n/2) || (i<=n/2 && i+j>=n-1 && i-j>=-(n/2)) || (i<=n/4 && i-j>=-(n/2) && i+j>=n/2))
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _49(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j==0 || i+j==n-1)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _50(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j==0 || i+j==n-1)
                printf("%d",i+1);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _51(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j==0 || i+j==n-1)
                printf("%d",n-i);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _52(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j==0 || i+j==n-1)
                printf("%d",j+1);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _53(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j==0 || i+j==n-1)
                printf("%d",n-j);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _54(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j==0 || i+j==n-1)
                printf("%c",65+i);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _55(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j==0 || i+j==n-1)
                printf("%c",65+j);
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _56(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j==0)
                printf("0");
            else
                printf("*");
        printf("\n");
    }
    return;
}
void _57(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i-j<=0)
                printf("0");
            else
                printf("*");
        printf("\n");
    }
    return;
}
void _58(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if((i-j==0) || (i+j==n-1))
                printf("*");
            else
                printf("o");
        printf("\n");
    }
    return;
}
void _59(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i==n/2 && j==n/2)
                printf("o");
            else
                printf("*");
        printf("\n");
    }
    return;
}
void _60(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i==n/2 || j==n/2)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return;
}
void _61(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            if(i==n/2 || j==n/2)
                printf("*");
            else
                printf("0");
        printf("\n");
    }
    return;
}
void _71(int n) {
    int numStars = 1; 
    for (int i = 1; i <= n; i++) {
        numStars = (2*((i + 1)/2));
        for (int j = 1; j<=n-1-((i-1)/2); j++) {
            printf(" ");
        }
        for (int j=1;j<numStars; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void _72(int n){
	for(int i=0;i<n;i++){
		printf("\n");
        for(int j=0;j<n;j++){
            if(i==n-1 || i==0 || j==0 || j==n-1)
            	printf("*");
            else
            	printf(" ");
        }
    }
    printf("\n");
}
void _73(int n){
	for(int i=0;i<n;i++){
		printf("\n");
        for(int j=0;j<n;j++){
            if(i==n-1 || i==0 || j==0 || j==n-1)
            	printf("*");
            else
            	printf("#");
        }
    }
    printf("\n");
}
void _74(int n){
	for(int i=0;i<n;i++){
		printf("\n");
        for(int j=0;j<n;j++){
        	if(j==0 || i==n-1 || i==j)
        		printf("*");
        	else
        	printf(" ");
        }
    }
    printf("\n");
}
void _75(int n){
	for(int i=0;i<n;i++){
		printf("\n");
        for(int j=0;j<n;j++){
            if(i==n-1 or i==0 || j==0 || j==n-1 || i==j || i+j==n-1)
            	printf("*");
            else
            	printf(" ");
        }
    }
    printf("\n");
}
void _76(int n){
	int a=0,b=1,res;
	for(int i=1;i<=n;i++){
		printf("\n");
		for(int j=1;j<=i;j++){
			if(j==1 && i==1)
				res=1;
			else{
				res=a+b;
				a=b;
				b=res;
			}
			printf("%d ",res);
		}
	}
	printf("\n");	
}
void _77(int n){
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<=i;j++){
			if(j==0)
				printf("0 ");
			else if(j==1 || j==2)
				printf("1 ");
			else
				printf("%d ",j-1);
		}
	}
	printf("\n");
}
void _78(int n){
	int c=1;
	for(int i=1;i<=n;i++){
		printf("\n");
		for(int j=1;j<=i;j++){
			printf("%d ",c);
			c++;
		}
	}
	printf("\n");
}
void _79(int n)
{
	for(int i=1;i<=n;i++){
		int c=i;
		printf("\n");
		for(int j=1;j<=i;j++){
				printf("%d ",c);
				c=c+(n-j);

		}
	}
	printf("\n");
}
void _80(int n){
	for(int i=1;i<=n;i++){
		printf("\n");
		for(int j=1;j<=i;j++){
			if(i%2==0)
				printf("%d ",2*j);
			else
				printf("%d ",2*j-1);
		}
	}
	printf("\n");
}
void _81(int n){
	int res=1;
	for(int i=1;i<n;i++){
		int s=res;
		printf("\n");
		for(int j=1;j<=i;j++){
			printf("%d ",s);
			s--;
		}
		res+=i+1;
	}
	printf("\n");
}
void _83(int n){
	for(int i=1;i<=n/2;i++){
		char c='A';
		printf("\n");
		for(int j=1;j<=i;j++){
			printf("%c ",c++);
		}
	}
	for(int i=n/2;i>=1;i--){
		printf("\n");
		char c='A';
		for(int j=1;j<=i;j++){
			printf("%c ",c++);
		}
	}
	printf("\n");
}
void _86(int n){
	for(int i=1;i<=n;i++){
		int n0=i;
		int n1=1;
		printf("\n");
		for(int j=1;j<=n+1;j++){
			if(j%2==1)
				printf("%d ",n0++);
			else
				printf("%d ",n1++);
		}
	}
	printf("\n");
}
void _87(int n){
	for(int i=1;i<=n;i++){
		int n0=1;
		int n1=i;
		printf("\n");
		for(int j=1;j<=n+1;j++){
			if(j%2==1)
				printf("%d ",n0++);
			else
				printf("%d ",n1);
		}
	}
	printf("\n");
}
void _88(int n)
{
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			if(i+j==n/2 || i+j==3*(n/2) || i-j==n/2 || i-j==-(n/2) || i==n/2 || j==n/2 )
				printf("*");
			else
				printf(" ");
		}
	}
	printf("\n");
}
void _89(int n){
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			if(i+j==3*(n/2) || i-j==-(n/2) || i==n/2 )
				printf("*");
			else
				printf(" ");
		}
	}
	printf("\n");
}
void _90(int n)
{
	for(int i=0;i<n;i++){
		printf("\n");
		for(int j=0;j<n;j++){
			if(i+j<=n/2 || i+j>=3*(n/2) || i-j>=n/2 || i-j<=-(n/2) )
				printf("*");
			else
				printf(" ");
		}
	}
	printf("\n");
}
void _92(int n){
    int c=1;
    for(int i=0;i<n;i++){
        for(int s=1;s<=n-i;s++){
            printf("  ");
        }
        for (int j=0;j<=i;j++){
            if(j==0||i==0)
                c=1;
            else
                c=c*(i-j+1)/j;
            printf("%4d",c);
        }
        printf("\n");
    }
}
int min(int a, int b){
    return (a<b)?a:b;
}
int patHR(int n){
    int O=n;
    n=2*n;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            int a = O+1-min(min(i,j),min(n-i,n-j));
            printf("%d ",a);
        }
        printf("\n");
    }
}
int main(){
    int n=5;
    _1(n);
    _2(n);
    _3(n);
    _4(n);
    _5(n);
    _6(n);
    _11(n);
    _12(n);
//    one(n);
//    two(n);
//    three(n);
//    four(n);
//    five(n);
//    six(n);
//    seven(n);
//    eight(n);
//    nine(n);
//    ten(n);
//    eleven(n);
//    twelve(n);
    _13(n);
    _14(n);
    _15(n);
    _16(n);
    _17(n);
    _18(n);
    _19(n);
    _20(n);
    _21(n);
    _22(n);
    _23(n);
    _28(n);
    _29(n);
    _30(n);
    _31(n);
    _32(n);
    _33(n);
    _35(n);
    _37(n);
    _38(n);
    _39(n);
    _41(n);
    _43(n);
    _44(n);
    _45(n);
    _48(n);
    _49(n);
    _50(n);
    _51(n);
    _52(n);
    _53(n);
    _54(n);
    _55(n);
    _56(n);
    _57(n);
    _58(n);
    _59(n);
    _60(n);
    _61(n);
    _71(n);
    _72(n);
    _73(n);
    _74(n);
    _75(n);
    _76(n);
    _77(n);
    _78(n);
    _79(n);
    _80(n);
    _81(n);
    _83(n);
    _86(n);
    _87(n);
    _88(n);
    _89(n);
    _90(n);
    _92(n);
    patHR(n);
}
