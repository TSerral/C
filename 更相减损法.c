# include<stdio.h>
//2.24
int main(){
	int a,b;
	int t=0;
	printf("��������������\n");       
	scanf("%d %d",&a,&b);
	if(a<b){
		t=a;
		a=b;
		b=t;
	}
	printf("%d-%d=%d\n",a,b,a-b);
	while(a!=b){
		t=a-b;
		if(b>t){
			a=b;
			b=t;
			printf("%d-%d=%d\n",a,b,a-b);
		} else{
			a=t;
			printf("%d-%d=%d\n",a,b,a-b);
		}
	}
	printf("���Լ��=%d\n",a);
} 
