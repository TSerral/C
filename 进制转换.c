//2.25 
#include <stdio.h>
#include <math.h>
int main(){
	int a,k,n,g,r,q;
	long long c=0,x=0;
	printf("��k������a(��nλ)ת��Ϊg���ƣ�������k,a,n,g\n",k,a,n,g);
	scanf("%d %d %d %d",&k,&a,&n,&g);
	int A=a; 
if(g!=16){  //�ж��Ƿ�Ϊʮ������ 
//k����תʮ����
	int b=0,i=1;
	int t=a%10;
	do{
		int s=pow(k,i-1);
		b=b+t*s;//bΪʮ������ 
		a=a/10;
		t=a%10;
		i++;
	}while(i<=n);
	int B=b; 
//ʮ����תg���� 
	do{
		q=b/g;
		r=b%g;
		long long h=pow(10,x);
	    c=c+r*h;
		x++;
		b=q;
	}while(q!=0);
	printf("%d������%dת��Ϊ%d����Ϊ%lld",k,A,g,c);
 }else{
    printf("%d������%dת��Ϊ%d����Ϊ%x",k,A,g,A);
 }
} 
