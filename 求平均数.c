//2.22
int main(){
    float number;
	float sum=0;
	int count=0;
	
	printf("��ƽ����\n���������֣�����֮��ո��������0������\n");
	scanf("%f",&number);
	while(number!=0){
		sum+=number;
		count++;
		scanf("%f",&number);
	}
	printf("ƽ����Ϊ:%f\n",sum/count);
	getch();
}
