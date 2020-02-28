//2.24
int main(){
	int a,b;
	int t,r;
    printf("请输入2个整数\n"); 
	scanf("%d %d",&a,&b);
	while(b!=0){
		r=a/b;
		t=a%b;
		printf("%d=%dx%d+%d\n",a,b,r,t);
		a=b;
		b=t;
	}
	printf("最大公约数=%d\n",a);
} 
