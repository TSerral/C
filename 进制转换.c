//2.25 
#include <stdio.h>
#include <math.h>
int main(){
	int a,k,n,g,r,q;
	long long c=0,x=0;
	printf("将k进制数a(共n位)转化为g进制，请输入k,a,n,g\n",k,a,n,g);
	scanf("%d %d %d %d",&k,&a,&n,&g);
	int A=a; 
if(g!=16){  //判断是否为十六进制 
//k进制转十进制
	int b=0,i=1;
	int t=a%10;
	do{
		int s=pow(k,i-1);
		b=b+t*s;//b为十进制数 
		a=a/10;
		t=a%10;
		i++;
	}while(i<=n);
	int B=b; 
//十进制转g进制 
	do{
		q=b/g;
		r=b%g;
		long long h=pow(10,x);
	    c=c+r*h;
		x++;
		b=q;
	}while(q!=0);
	printf("%d进制数%d转化为%d进制为%lld",k,A,g,c);
 }else{
    printf("%d进制数%d转化为%d进制为%x",k,A,g,A);
 }
} 
