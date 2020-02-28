//2.22
int main(){
    float number;
	float sum=0;
	int count=0;
	
	printf("求平均数\n请输入数字，数字之间空格隔开，以0结束。\n");
	scanf("%f",&number);
	while(number!=0){
		sum+=number;
		count++;
		scanf("%f",&number);
	}
	printf("平均数为:%f\n",sum/count);
	getch();
}
