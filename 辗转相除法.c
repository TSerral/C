//2.24
int main(){
	int a,b;
	int t,r;
    printf("������2������\n"); 
	scanf("%d %d",&a,&b);
	while(b!=0){
		r=a/b;
		t=a%b;
		printf("%d=%dx%d+%d\n",a,b,r,t);
		a=b;
		b=t;
	}
	printf("���Լ��=%d\n",a);
} 
